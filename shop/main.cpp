#include "shop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    shop w;
    w.show();

    return a.exec();
}
