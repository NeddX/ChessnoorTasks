#include "Qool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qool w;
    w.show();
    return a.exec();
}
