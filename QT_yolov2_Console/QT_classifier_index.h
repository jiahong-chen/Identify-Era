#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_classifier_index.h"

#include "QT_classifier_Classification.h"
#include "QT_classifier_Train.h"

#include <QMainWindow>
#include <QTextCodec>
#include <QLabel>

class QT_classifier_index : public QMainWindow
{
	Q_OBJECT

public:
	QT_classifier_index(QWidget *parent = Q_NULLPTR);

private slots:
	void show_train();
	void show_classification();
	void send_return_signal();
	void classifier_index_show();

signals:
	void go_back();

private:
	Ui::QT_classifier_IndexClass ui;

	QT_classifier_Classification classifier_classification;
	QT_classifier_Train classifier_train;
};