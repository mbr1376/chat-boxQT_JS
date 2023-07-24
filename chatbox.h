#ifndef CHATBOX_H
#define CHATBOX_H

#include <QMainWindow>
#include <QQuickView>
//  library for display qml  in widget
#include <QWidget>
#include <QQmlContext>
#include <QQmlEngine>


#include "sendrecivedata.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ChatBox; }
QT_END_NAMESPACE

class ChatBox : public QMainWindow
{
    Q_OBJECT

public:
    ChatBox(QWidget *parent = nullptr);
    ~ChatBox();

private:
    Ui::ChatBox *ui;
    QQuickView *view;
    // class widget for display qml
    QWidget *qmlwidget;
    SendReciveData *sendrecive;
    QTimer *timer;
};
#endif // CHATBOX_H
