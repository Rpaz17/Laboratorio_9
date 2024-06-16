#include "cframe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cFrame w;
    w.show();
    return a.exec();
}
