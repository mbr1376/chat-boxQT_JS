#include "chatbox.h"
#include "ui_chatbox.h"

ChatBox::ChatBox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChatBox)
{
    ui->setupUi(this);
    sendrecive= new SendReciveData();
    view= new QQuickView();
    QQmlContext *context =  view->rootContext();
    context->setContextProperty("SendRecive",sendrecive);
    view->setSource(QUrl("qrc:/qml/main.qml"));
    /// set data class datamanager to main qml
    //view->engine()->rootContext()->setContextProperty("Datamanager",d);
    ///set qml to widget
    qmlwidget=QWidget::createWindowContainer(view);
    /// horizontalLayout creat in ui
    ui->horizontalLayout->addWidget(qmlwidget);
}

ChatBox::~ChatBox()
{
    delete ui;
}

