#include "QT_index.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QT_index w;
	w.show();

	return a.exec();
}
