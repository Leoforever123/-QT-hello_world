/********************************************************************************
** Form generated from reading UI file 'game_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WIDGET_H
#define UI_GAME_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_widget
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *game_widget)
    {
        if (game_widget->objectName().isEmpty())
            game_widget->setObjectName("game_widget");
        game_widget->resize(800, 600);
        menubar = new QMenuBar(game_widget);
        menubar->setObjectName("menubar");
        game_widget->setMenuBar(menubar);
        centralwidget = new QWidget(game_widget);
        centralwidget->setObjectName("centralwidget");
        game_widget->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(game_widget);
        statusbar->setObjectName("statusbar");
        game_widget->setStatusBar(statusbar);

        retranslateUi(game_widget);

        QMetaObject::connectSlotsByName(game_widget);
    } // setupUi

    void retranslateUi(QMainWindow *game_widget)
    {
        game_widget->setWindowTitle(QCoreApplication::translate("game_widget", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_widget: public Ui_game_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WIDGET_H
