/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *addLayout;
    QLineEdit *entryEdit;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPushButton *addButton;
    QListWidget *entriesList;
    QHBoxLayout *buttonLayout;
    QPushButton *deleteButton;
    QPushButton *logoutButton;
    QPushButton *feedbackButton;
    QPushButton *historyButton;
    QLabel *dateTimeLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignHCenter);
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        addLayout = new QHBoxLayout();
        addLayout->setObjectName("addLayout");
        entryEdit = new QLineEdit(centralwidget);
        entryEdit->setObjectName("entryEdit");
        entryEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #333; border-radius: 5px; padding: 5px;"));

        addLayout->addWidget(entryEdit);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);
        dateEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #333; border-radius: 5px; padding: 5px;"));

        addLayout->addWidget(dateEdit);

        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setStyleSheet(QString::fromUtf8("border: 2px solid #333; border-radius: 5px; padding: 5px;"));

        addLayout->addWidget(timeEdit);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        addLayout->addWidget(addButton);


        verticalLayout->addLayout(addLayout);

        entriesList = new QListWidget(centralwidget);
        entriesList->setObjectName("entriesList");

        verticalLayout->addWidget(entriesList);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: #f44336; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        buttonLayout->addWidget(deleteButton);

        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #333; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        buttonLayout->addWidget(logoutButton);

        feedbackButton = new QPushButton(centralwidget);
        feedbackButton->setObjectName("feedbackButton");
        feedbackButton->setStyleSheet(QString::fromUtf8("background-color: #2196F3; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        buttonLayout->addWidget(feedbackButton);

        historyButton = new QPushButton(centralwidget);
        historyButton->setObjectName("historyButton");
        historyButton->setStyleSheet(QString::fromUtf8("background-color: #9C27B0; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        buttonLayout->addWidget(historyButton);


        verticalLayout->addLayout(buttonLayout);

        dateTimeLabel = new QLabel(centralwidget);
        dateTimeLabel->setObjectName("dateTimeLabel");
        dateTimeLabel->setAlignment(Qt::AlignRight);

        verticalLayout->addWidget(dateTimeLabel);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Training Schedule", nullptr));
        entryEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter training entry", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "hh:mm AP", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete Selected Entry", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        feedbackButton->setText(QCoreApplication::translate("MainWindow", "Send Feedback", nullptr));
        historyButton->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
        dateTimeLabel->setText(QCoreApplication::translate("MainWindow", "Current Date and Time", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
