#define _CRT_SECURE_NO_WARNINGS

#include "QT_yolo_Train.h"

static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_yolo_Train::QT_yolo_Train(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.start, SIGNAL(clicked()), this, SLOT(start()));
	connect(ui.pause, SIGNAL(clicked()), this, SLOT(pause()));
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
	video = cv::VideoCapture("./yolo_data/video/yolo_trainLogo.m4v");
}

void QT_yolo_Train::send_return_signal() {
	emit go_back();
}

void QT_yolo_Train::start()
{
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(getframe()));
	timer->start(42);
}

void QT_yolo_Train::pause()
{
	timer->stop();
}

void QT_yolo_Train::getframe()
{
	video >> src_frame;
	cvtColor(src_frame, src_frame, CV_BGR2RGB);
	if (!src_frame.data) {
		timer->stop();
		video = cv::VideoCapture("./yolo_data/video/yolo_trainLogo.m4v");
	}
	qimg = QImage((const uchar*)src_frame.data, src_frame.cols, src_frame.rows, QImage::Format_RGB888);
	ui.label->setPixmap(QPixmap::fromImage(qimg));
}