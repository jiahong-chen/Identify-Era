#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_index.h"

#include "QT_yolo_index.h"
#include "QT_classifier_index.h"

#include <thread>

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
	void index_show();

private:
	Ui::QT_indexClass ui;

	QT_yolo_index yolo_index;
	QT_classifier_index classifier_index;
};
#pragma once
