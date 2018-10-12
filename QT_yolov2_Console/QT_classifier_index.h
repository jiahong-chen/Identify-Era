#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_classifier_index.h"

#include <QMainWindow>
#include <QTextCodec>
#include <QLabel>

class QT_classifier_index : public QMainWindow
{
	Q_OBJECT

public:
	QT_classifier_index(QWidget *parent = Q_NULLPTR);

	private slots:
	void send_return_signal();

signals:
	void go_back();

private:
	Ui::QT_classifier_IndexClass ui;
};
#pragma once
