#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setMinimumSize(600,300);
    w.resize(200,200);
    w.show();
    return a.exec();
}
