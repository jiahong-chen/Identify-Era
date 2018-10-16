#define _CRT_SECURE_NO_WARNINGS

#include "QT_classifier_Classification.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_classifier_Classification::QT_classifier_Classification(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
}

void QT_classifier_Classification::send_return_signal() {
	emit go_back();
}