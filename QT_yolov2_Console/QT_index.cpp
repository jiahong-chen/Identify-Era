#define _CRT_SECURE_NO_WARNINGS

#include "QT_index.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_index::QT_index(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	showFullScreen();

	connect(&yolo_index, SIGNAL(go_back()), this, SLOT(index_show()));
	connect(&classifier_index, SIGNAL(go_back()), this, SLOT(index_show()));
	connect(ui.detection_button, SIGNAL(clicked()), this, SLOT(switch_to_detection()));
	connect(ui.classifier_button, SIGNAL(clicked()), this, SLOT(switch_to_classifier()));
	connect(ui.exit, SIGNAL(clicked()), this, SLOT(exit()));
}

void QT_index::switch_to_detection() {
	hide();
	yolo_index.show();
}

void QT_index::switch_to_classifier() {
	hide();
	classifier_index.show();
}

void QT_index::exit() {
	QApplication* app;
	app->quit();
}

void QT_index::index_show() {
	show();
}