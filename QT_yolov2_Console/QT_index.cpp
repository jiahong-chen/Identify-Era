#define _CRT_SECURE_NO_WARNINGS

#include "QT_index.h"

static QTextCodec *codec = QTextCodec::codecForName("Big5-ETen");	//QT�ѨMBIG-5�s�X���D

QT_index::QT_index(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QMainWindow::showFullScreen();
}