#include "QT_yolo_Train.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_yolo_Train w;
	w.show();

	return a.exec();
}
