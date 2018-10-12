#define _CRT_SECURE_NO_WARNINGS

#include "QT_index.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_index::QT_index(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->showFullScreen();

	//connect(&detection, SIGNAL(QT_yolov2_Console::go_back), this, SLOT(return_show()));
	connect(ui.detection_button, SIGNAL(clicked()), this, SLOT(switch_to_detection()));
	connect(ui.classifier_button, SIGNAL(clicked()), this, SLOT(switch_to_classifier()));
	connect(ui.exit, SIGNAL(clicked()), this, SLOT(exit()));
}

void QT_index::switch_to_detection() {
	hide();
	detection.show();
}

void QT_index::switch_to_classifier() {
	
}

void QT_index::exit() {
	QApplication* app;
	app->quit();
}

/*void QT_index::return_show() {
	show();
}*/