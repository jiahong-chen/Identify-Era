#include "QT_yolov2_Console.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_yolov2_Console w;
	w.show();
	return a.exec();
}
