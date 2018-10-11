#define _CRT_SECURE_NO_WARNINGS

#include "QT_yolov2_Console.h"

static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

																	//static string open_file_path = "C:/Users/XinCheng/Documents/Program/Qt/QT_yolo_Console/QT_yolo_Console/yolo_data";	//預設開啟檔案路徑
static string yolo_weights_path = "./yolo_data/weights/";	//yolo weights 檔路徑
static string yolo_cfg_path = "./yolo_data/cfgs/";			//yolo cfg 檔路徑
static string yolo_name_path = "./yolo_data/names/";		//yolo name 檔路徑

static int object_indx = 0;							//物件變數索引值
static string object_name_vec[100] = { "" };		//物件名稱容器
static int object_index_vec[100] = { 0 };			//物件id容器

static string yolo_weights[15];						//存放所有weights檔名稱
static string yolo_cfgs[15];						//存放所有cfg檔名稱
static string yolo_names[15];						//存放所有names檔名稱


													/*******字串切割********/
vector<string> split(string input, const char * delimiters) {
	vector<string> vec;
	char *temp;
	char *inputCharArray;
	inputCharArray = new char[input.size()];
	strcpy(inputCharArray, input.c_str());
	temp = strtok(inputCharArray, delimiters);
	while (temp != NULL) {
		vec.push_back(temp);
		temp = strtok(NULL, delimiters);
	}
	return vec;
}

string QT_yolov2_Console::int2str(int &i) {
	string s;		//字元串接字串
	stringstream ss(s);
	ss << i;

	return ss.str();
}


#define OPENCV
#include "yolo_v2_class.hpp"	// imported functions from DLL
#ifdef OPENCV
#include <opencv2/opencv.hpp>			// C++
#include "opencv2/core/version.hpp"

/*#ifndef CV_VERSION_EPOCH
#include "opencv2/videoio/videoio.hpp"
#endif*/

void draw_boxes(cv::Mat mat_img, std::vector<bbox_t> result_vec, std::vector<std::string> obj_names, unsigned int wait_msec = 0) {
	for (auto &i : result_vec) {
		cv::Scalar color(60, 160, 260);
		cv::rectangle(mat_img, cv::Rect(i.x, i.y, i.w, i.h), color, 2);
		if (obj_names.size() > i.obj_id) {
			std::string obj_name = obj_names[i.obj_id];
			//if (i.track_id > 0) obj_name += " - " + std::to_string(i.track_id);
			cv::Size const text_size = getTextSize(obj_name, cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, 2, 0);
			int const max_width = (text_size.width > i.w + 2) ? text_size.width : (i.w + 2);
			cv::rectangle(mat_img, cv::Point2f(std::max((int)i.x - 3, 0), std::max((int)i.y - 30, 0)),
				cv::Point2f(std::min((int)i.x + max_width, mat_img.cols - 1), std::min((int)i.y, mat_img.rows - 1)),
				color, CV_FILLED, 8, 0);
			putText(mat_img, obj_name, cv::Point2f(i.x, i.y - 10), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.2, cv::Scalar(0, 0, 0), 2);
		}
	}
	//cv::imshow("window name", mat_img);
	//cv::waitKey(wait_msec);
}
#endif	// OPENCV


void show_result(std::vector<bbox_t> const result_vec, std::vector<std::string> const obj_names) {
	object_indx = 0;
	for (auto &i : result_vec) {
		if (obj_names.size() > i.obj_id) std::cout << obj_names[i.obj_id] << " - ";
		std::cout << "obj_id = " << i.obj_id << ",  x = " << i.x << ", y = " << i.y
			<< ", w = " << i.w << ", h = " << i.h
			<< std::setprecision(3) << ", prob = " << i.prob << std::endl;

		object_index_vec[object_indx] = i.obj_id;
		object_name_vec[object_indx] = obj_names[i.obj_id];
		object_indx++;
	}
}

std::vector<std::string> objects_names_from_file(std::string const filename) {
	std::ifstream file(filename);
	std::vector<std::string> file_lines;
	if (!file.is_open()) return file_lines;
	for (std::string line; file >> line;) file_lines.push_back(line);
	//std::cout << "object names loaded \n";
	return file_lines;
}

Detector *detector;
void QT_yolov2_Console::yolo_main(string filename) {
	try {
#ifdef OPENCV
		std::string const file_ext = filename.substr(filename.find_last_of(".") + 1);
		std::string const protocol = filename.substr(0, 7);
		if (file_ext == "avi" || file_ext == "mp4" || file_ext == "mjpg" || file_ext == "mov" || 	// video file
			protocol == "rtsp://" || protocol == "http://" || protocol == "https:/")	// video network stream
		{
			cv::Mat frame, prev_frame, det_frame;
			std::vector<bbox_t> result_vec, thread_result_vec;
			detector->nms = 0.02;	// comment it - if track_id is not required
			std::thread td([]() {});
			std::atomic<int> ready_flag;
			ready_flag = true;
			for (cv::VideoCapture cap(filename); cap >> frame, cap.isOpened();) {
				if (ready_flag || (protocol != "rtsp://" && protocol != "http://" && protocol != "https:/")) {
					td.join();
					ready_flag = false;
					result_vec = thread_result_vec;
					result_vec = detector->tracking(result_vec);	// comment it - if track_id is not required
					det_frame = frame;
					td = std::thread([&]() { thread_result_vec = detector->detect(det_frame, 0.24, true); ready_flag = true; });
				}
				if (!prev_frame.empty()) {
					draw_boxes(prev_frame, result_vec, obj_names, 3);
					show_result(result_vec, obj_names);
				}
				prev_frame = frame;
			}
		}
		else if (file_ext == "txt") {	// list of image files
			std::ifstream file(filename);
			if (!file.is_open()) std::cout << "File not found! \n";
			else
				for (std::string line; file >> line;) {
					std::cout << line << std::endl;
					cv::Mat mat_img = cv::imread(line);
					std::vector<bbox_t> result_vec = detector->detect(mat_img);
					show_result(result_vec, obj_names);
					//draw_boxes(mat_img, result_vec, obj_names);
					//cv::imwrite("res_" + line, mat_img);
				}

		}
		else {	// image file
			cv::Mat mat_img = cv::imread(filename);
			std::vector<bbox_t> result_vec = detector->detect(mat_img);
			result_vec = detector->tracking(result_vec);	// comment it - if track_id is not required

			draw_image = mat_img.clone();
			draw_boxes(draw_image, result_vec, obj_names);
			show_result(result_vec, obj_names);

			draw_label_image();
			show_label_list();
		}
#else
		//std::vector<bbox_t> result_vec = detector.detect(filename);

		auto img = detector.load_image(filename);
		std::vector<bbox_t> result_vec = detector.detect(img);
		detector.free_image(img);
		show_result(result_vec, obj_names);
#endif			
	}
	catch (std::exception &e) { std::cerr << "exception: " << e.what() << "\n"; getchar(); }
	catch (...) { std::cerr << "unknown exception \n"; getchar(); }
	filename.clear();
}

void QT_yolov2_Console::yolo_reload(int index) {
	detector = new Detector(yolo_cfg_path + yolo_cfgs[index], yolo_weights_path + yolo_weights[index]);
	obj_names = objects_names_from_file(yolo_name_path + yolo_names[index]);
}


QT_yolov2_Console::QT_yolov2_Console(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QMainWindow::showFullScreen();
	load_yolo_ini("./yolo_data/cfgs/tiny-yolo-voc.cfg");
	yolo_reload(0);

	connect(ui.file_button, SIGNAL(clicked()), this, SLOT(file_ck()));
	connect(ui.cfgfile_button, SIGNAL(clicked()), this, SLOT(cfgfile_ck()));
	connect(ui.start_button, SIGNAL(clicked()), this, SLOT(start()));

}

//functions
void QT_yolov2_Console::show_label_list() {
	ui.listWidget->clear();
	vector<string> list;
	for (int i = 0; i < object_indx; i++) {
		list.insert(list.end(), object_name_vec[i]);
	}
	sort(list.begin(), list.end());
	list.erase(unique(list.begin(), list.end()), list.end());
	for (int j = 0; j < list.size(); j++) {
		string st = list[j];
		ui.listWidget->addItem(codec->toUnicode(st.c_str()));
	}
}

void QT_yolov2_Console::draw_label_image() {
	if (!draw_image.empty()) {
		Mat draw_tmp;
		cvtColor(draw_image, draw_tmp, CV_BGR2RGB);	//由於openCV讀取排列為BGR而一般程式讀取為RGB因此需轉換

		int col = draw_image.cols;
		int row = draw_image.rows;
		if (col % 4 != 0) col -= col % 4;
		cv::resize(draw_tmp, draw_tmp, cv::Size(col, row));
		//flip(frame, frame, 1);				//由於攝影機拍攝左右相反，因此需做垂直翻轉

		QImage img = QImage((uchar*)draw_tmp.data, draw_tmp.cols, draw_tmp.rows, QImage::Format_RGB888);	//讀取攝影機影像
		QPixmap pixmap = QPixmap::fromImage(img);
		QPixmap fitpixmap = pixmap.scaled(ui.show_image_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
		//img.scaled(ui.show_image_label->size(), Qt::KeepAspectRatio);
		ui.show_image_label->clear();				//清空顯示label
		ui.show_image_label->setPixmap(fitpixmap);	//顯示於label上
	}
}


int QT_yolov2_Console::load_yolo_ini(string path) {

	vector<string> vector = split(path, "/");	//字串切割
	int indx = vector.size();
	string file_name = vector[indx - 1];
	vector = split(file_name, ".");
	file_name = vector[0];

	yolo_cfgs[0] = file_name + ".cfg";
	yolo_weights[0] = file_name + ".weights";
	yolo_names[0] = file_name + ".names";

	file_name = yolo_cfg_path + yolo_cfgs[0];
	if (_access(file_name.c_str(), 4) != 0) {
		QMessageBox::information(this, "Warning", codec->toUnicode("查無指定*.cfg檔"));
		return 0;
	}
	file_name = yolo_weights_path + yolo_weights[0];
	if (_access(file_name.c_str(), 4) != 0) {
		QMessageBox::information(this, "Warning", codec->toUnicode("查無指定*.weights檔"));
		return 0;
	}
	file_name = yolo_name_path + yolo_names[0];
	if (_access(file_name.c_str(), 4) != 0) {
		QMessageBox::information(this, "Warning", codec->toUnicode("查無指定*.names檔"));
		return 0;
	}
	ui.line_cfg->setText(codec->toUnicode(yolo_cfgs[0].c_str()));
	return 1;
}


//SLOTS
void QT_yolov2_Console::file_ck() {
	string cfg_line_str = ui.line_cfg->text().toStdString();
	if (cfg_line_str == "") {
		QMessageBox::information(this, "ERROR", codec->toUnicode("尚未選擇*.cfg檔"));
		return;
	}

	QFileDialog myFileDialog(this);
	QString s = myFileDialog.getOpenFileName(this, codec->toUnicode("開啟影像檔"), QDir::currentPath(), "Image files (*.png *.xpm *.jpg)\nVideo files (*.mp4 *.avi)");
	ui.path_editline->setText(s);

	/*if (s != "") {
		yolo_main(s.toStdString());
	}*/
}

void QT_yolov2_Console::cfgfile_ck() {
	QFileDialog myFileDialog(this);
	QString s = myFileDialog.getOpenFileName(this, codec->toUnicode("開啟Cfg檔案"), QDir::currentPath(), "CFG files (*.cfg)");
	ui.line_cfg->setText(s);
	//detector->~Detector();
	if (s != "") {
		int check = load_yolo_ini((string)s.toStdString());
		if (check)yolo_reload(0);
	}
	else {
		ui.line_cfg->setText("");
	}
}

void QT_yolov2_Console::start() {
	if (ui.path_editline->text() != "") {
		QProgressDialog *progressDlg = new QProgressDialog();
		std::thread thread1(&QT_yolov2_Console::yolo_main, this, ui.path_editline->text().toStdString());
		progressbar(progressDlg);
		thread1.detach();
	}
}

void QT_yolov2_Console::progressbar(QProgressDialog *progressDlg) {
	progressDlg->show();
	progressDlg->setWindowModality(Qt::WindowModal);
	progressDlg->setMinimumDuration(0);
	progressDlg->setAttribute(Qt::WA_DeleteOnClose, true);
	progressDlg->setFixedSize(400, 100);
	progressDlg->setRange(0, 100);
	progressDlg->setLabelText("processing...");
	progressDlg->setStyleSheet("QProgressBar { \
									color: #FFFFFF; \
									background-color: #FFFFFF; \
									border-style: outset; \
									text-align: center; \
									font-size: 20px; \
									border-width: 2px; \
									border-radius: 10px; \
									padding: 6px; \
								} \
								QProgressBar::chunk { \
									background-color: #343434; \
								}");
	for (int i = 0; i <= 100; i += 1) {
		progressDlg->setValue(i);
		_sleep(10);
	}
}
