#define _CRT_SECURE_NO_WARNINGS

#include "QT_yolo_Train.h"

static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT�ѨMBIG-5�s�X���D

QT_yolo_Train::QT_yolo_Train(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
	video = cv::VideoCapture("D:\\project\\MOV_0332.mp4");
}

void QT_yolo_Train::on_pushButton_clicked()
{
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(getframe()));
	timer->start(42);
}
int k = 0;
void QT_yolo_Train::getframe()
{
	k++;
	cout << k << "get frame" << endl;
	video >> src_frame;
	if (!src_frame.data)timer->stop();
	qimg = QImage((const uchar*)src_frame.data, src_frame.cols, src_frame.rows, QImage::Format_RGB888);
	ui.label->setPixmap(QPixmap::fromImage(qimg));
}