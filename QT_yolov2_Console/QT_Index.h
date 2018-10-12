#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_index.h"

#include "QT_yolov2_Console.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QTextCodec>
#include <QLabel>

class QT_index : public QMainWindow
{
	Q_OBJECT

public:
	QT_index(QWidget *parent = Q_NULLPTR);

private slots:
	void switch_to_detection();
	void switch_to_classifier();
	void exit();
	//void return_show();
private:
	Ui::QT_indexClass ui;

	QT_yolov2_Console detection;
};
#pragma once
