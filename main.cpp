#include "chatbox.h"

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtWebEngineQuick/qtwebenginequickglobal.h>
int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QApplication a(argc, argv);
    QtWebEngineQuick::initialize();
    ChatBox w;
    w.show();
    return a.exec();
}
