#define _CRT_SECURE_NO_WARNINGS

#include "QT_classifier_Classification.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

static string pb_path = "./tensorflow/data/pb/";					//pb檔路徑
static string label_path = "./tensorflow/data/label/";			//txt檔路徑

static string pb[15];							//存放所有pb檔名稱
static string label[15];						//存放所有txt檔名稱

vector<string> splitString(string input, const char * delimiters) {
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

QT_classifier_Classification::QT_classifier_Classification(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	load_pb_ini("./tensorflow/data/pb/inception.pb");
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
	connect(ui.file_button, SIGNAL(clicked()), this, SLOT(file_ck()));
	connect(ui.pbfile_button, SIGNAL(clicked()), this, SLOT(pbfile_ck()));
	connect(ui.start, SIGNAL(clicked()), this, SLOT(start()));
}

void QT_classifier_Classification::inception_main(String filename) {
	FILE *file;
	string pbfile;
	string labelfile;
	QProcess *process = new QProcess();
	pbfile = pb_path + pb[0];
	labelfile = label_path + label[0];
	file = fopen("inception.cmd", "w+");
	fprintf(file, "activate.bat tf&python classifier.py --graph %s --label %s --image %s", pbfile.c_str(), labelfile.c_str(), filename.c_str());
	fclose(file);
	process->start("./inception.cmd");
	process->waitForStarted();
	process->waitForFinished();
	show_label_list(process);
	draw_label_image(filename);
}

void QT_classifier_Classification::show_label_list(QProcess *process) {
	ui.listWidget->clear();
	String result = (string)process->readAllStandardOutput();
	vector<string> vec = splitString(result, "\r\n");
	for (int i=0; i < vec.size(); i++) {
		if (i != 0) {
			ui.listWidget->addItem(vec.at(i).c_str());
		}
	}
}

void QT_classifier_Classification::draw_label_image(String filename) {
	cv::Mat mat_img = cv::imread(filename);
	draw_image = mat_img.clone();
	if (!draw_image.empty()) {
		Mat draw_tmp;
		cvtColor(draw_image, draw_tmp, CV_BGR2RGB);

		int col = draw_image.cols;
		int row = draw_image.rows;
		if (col % 4 != 0) col -= col % 4;
		cv::resize(draw_tmp, draw_tmp, cv::Size(col, row));

		QImage img = QImage((uchar*)draw_tmp.data, draw_tmp.cols, draw_tmp.rows, QImage::Format_RGB888);
		QPixmap pixmap = QPixmap::fromImage(img);
		QPixmap fitpixmap = pixmap.scaled(ui.show_image_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
		ui.show_image_label->clear();				//清空顯示label
		ui.show_image_label->setPixmap(fitpixmap);	//顯示於label上
	}
}

int QT_classifier_Classification::load_pb_ini(string path) {
	vector<string> vector = splitString(path, "/");	//字串切割
	int indx = vector.size();
	string file_name = vector[indx - 1];
	vector = splitString(file_name, ".");
	file_name = vector[0];

	pb[0] = file_name + ".pb";
	label[0] = file_name + ".txt";

	file_name = pb_path + pb[0];
	QMessageBox Qmsg;
	if (_access(file_name.c_str(), 4) != 0) {
		Qmsg.setText(codec->toUnicode("查無指定*.pb檔"));
		Qmsg.exec();
		return 0;
	}
	file_name = label_path + label[0];
	if (_access(file_name.c_str(), 4) != 0) {
		Qmsg.setText(codec->toUnicode("查無指定*.txt檔"));
		Qmsg.exec();
		return 0;
	}

	ui.line_pb->setText(codec->toUnicode(pb[0].c_str()));
	return 1;
}

void QT_classifier_Classification::file_ck() {
	string pb_line_str = ui.line_pb->text().toStdString();
	if (pb_line_str == "") {
		QMessageBox Qmsg;
		Qmsg.setText(codec->toUnicode("尚未選擇*.pb檔"));
		Qmsg.exec();
		return;
	}
	QFileDialog myFileDialog(this);
	QString s = myFileDialog.getOpenFileName(this, codec->toUnicode("開啟影像檔"), QDir::currentPath(), "Image files (*.png *.jpg)");
	ui.path_editline->setText(s);
}

void QT_classifier_Classification::pbfile_ck() {
	QFileDialog myFileDialog(this);
	QString s = myFileDialog.getOpenFileName(this, codec->toUnicode("開啟pb檔案"), QDir::currentPath(), "PB files (*.pb)");
	ui.line_pb->setText(s);
	if (s != "") {
		load_pb_ini((string)s.toStdString());
	}
	else {
		ui.line_pb->setText("");
	}
}

void QT_classifier_Classification::start() {
	if (ui.path_editline->text() != "") {
		QProgressDialog *progressDlg = new QProgressDialog();
		std::thread thread1(&QT_classifier_Classification::inception_main, this, ui.path_editline->text().toStdString());
		progressbar(progressDlg);
		thread1.detach();
	} else {
		QMessageBox Qmsg;
		Qmsg.setText(codec->toUnicode("影像檔尚未選擇"));
		Qmsg.exec();
	}
}

void QT_classifier_Classification::progressbar(QProgressDialog *progressDlg) {
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
		_sleep(150);
	}
}

void QT_classifier_Classification::send_return_signal() {
	emit go_back();
}
