#include "hustlibrary.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HustLibrary w;

    w.show();
    return a.exec();
}
