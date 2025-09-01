#include "poplayer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Poplayer w;
    w.show();
    return a.exec();
}
