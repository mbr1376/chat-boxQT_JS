/********************************************************************************
** Form generated from reading UI file 'chatbox.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBOX_H
#define UI_CHATBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatBox
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatBox)
    {
        if (ChatBox->objectName().isEmpty())
            ChatBox->setObjectName("ChatBox");
        ChatBox->resize(800, 600);
        centralwidget = new QWidget(ChatBox);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout->addLayout(horizontalLayout);

        ChatBox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatBox);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ChatBox->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatBox);
        statusbar->setObjectName("statusbar");
        ChatBox->setStatusBar(statusbar);

        retranslateUi(ChatBox);

        QMetaObject::connectSlotsByName(ChatBox);
    } // setupUi

    void retranslateUi(QMainWindow *ChatBox)
    {
        ChatBox->setWindowTitle(QCoreApplication::translate("ChatBox", "ChatBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatBox: public Ui_ChatBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBOX_H
