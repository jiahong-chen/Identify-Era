#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_yolo_index.h"

#include <QMainWindow>
#include <QTextCodec>
#include <QLabel>

class QT_yolo_index : public QMainWindow
{
	Q_OBJECT

public:
	QT_yolo_index(QWidget *parent = Q_NULLPTR);
	
private slots:
	void send_return_signal();

signals:
	void go_back();

private:
	Ui::QT_yolo_IndexClass ui;
};
#pragma once
