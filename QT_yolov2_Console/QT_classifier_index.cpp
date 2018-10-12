#define _CRT_SECURE_NO_WARNINGS

#include "QT_classifier_index.h"


static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT解決BIG-5編碼問題

QT_classifier_index::QT_classifier_index(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	showFullScreen();
	connect(ui.return_button, SIGNAL(clicked()), this, SLOT(send_return_signal()));
}

void QT_classifier_index::send_return_signal() {
	emit go_back();
}
