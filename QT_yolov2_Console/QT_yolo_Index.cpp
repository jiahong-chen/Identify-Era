#define _CRT_SECURE_NO_WARNINGS

#include "QT_yolo_index.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_yolo_index::QT_yolo_index(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.train_button, SIGNAL(clicked()), this, SLOT(show_train()));
	connect(ui.detection_button, SIGNAL(clicked()), this, SLOT(show_detection()));
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
	connect(&yolo_detection, SIGNAL(go_back()), this, SLOT(yolo_index_show()));
	connect(&yolo_train, SIGNAL(go_back()), this, SLOT(yolo_index_show()));
}

void QT_yolo_index::send_return_signal() {
	emit go_back();
}

void QT_yolo_index::show_train() {
	yolo_train.showFullScreen();
}

void QT_yolo_index::show_detection() {
	yolo_detection.showFullScreen();
}

void QT_yolo_index::yolo_index_show() {
	showFullScreen();
}