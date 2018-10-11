#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_index.h"

#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <direct.h>
#include <thread>
#include <atomic>
#include <io.h>

#include <QMainWindow>
#include <QTextCodec>
#include <QLabel>

class QT_index : public QMainWindow
{
	Q_OBJECT

public:
	QT_index(QWidget *parent = Q_NULLPTR);
	private slots:

private:
	Ui::QT_indexClass ui;
};
#pragma once
