#define _CRT_SECURE_NO_WARNINGS

#include "QT_classifier_index.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_classifier_index::QT_classifier_index(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(&classifier_classification, SIGNAL(go_back()), this, SLOT(classifier_index_show()));
	connect(&classifier_train, SIGNAL(go_back()), this, SLOT(classifier_index_show()));
	connect(ui.classification_button, SIGNAL(clicked()), this, SLOT(show_classification()));
	connect(ui.train_button, SIGNAL(clicked()), this, SLOT(show_train()));
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
}

void QT_classifier_index::show_train() {
	classifier_train.showFullScreen();
}

void QT_classifier_index::show_classification() {
	classifier_classification.showFullScreen();
}

void QT_classifier_index::send_return_signal() {
	emit go_back();
}

void QT_classifier_index::classifier_index_show() {
	showFullScreen();
}