
#include <QtCore/QCoreApplication>

#include <string>
#include "GConvert.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	std::string s("123");
	int n = _GCONV( s );
	printf("%d", n);

	return a.exec();
}