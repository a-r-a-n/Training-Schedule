/********************************************************************************
** Form generated from reading UI file 'historydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYDIALOG_H
#define UI_HISTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QListWidget *historyListWidget;
    QHBoxLayout *buttonLayout;
    QPushButton *clearButton;
    QPushButton *returnButton;

    void setupUi(QDialog *HistoryDialog)
    {
        if (HistoryDialog->objectName().isEmpty())
            HistoryDialog->setObjectName("HistoryDialog");
        HistoryDialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(HistoryDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 361, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(verticalLayoutWidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignHCenter);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        historyListWidget = new QListWidget(verticalLayoutWidget);
        historyListWidget->setObjectName("historyListWidget");

        verticalLayout->addWidget(historyListWidget);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        clearButton = new QPushButton(verticalLayoutWidget);
        clearButton->setObjectName("clearButton");
        clearButton->setStyleSheet(QString::fromUtf8("background-color: #f44336; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        buttonLayout->addWidget(clearButton);

        returnButton = new QPushButton(verticalLayoutWidget);
        returnButton->setObjectName("returnButton");
        returnButton->setStyleSheet(QString::fromUtf8("background-color: #333; color: white; padding: 10px 20px; border: none; border-radius: 5px;"));

        buttonLayout->addWidget(returnButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(HistoryDialog);

        QMetaObject::connectSlotsByName(HistoryDialog);
    } // setupUi

    void retranslateUi(QDialog *HistoryDialog)
    {
        titleLabel->setText(QCoreApplication::translate("HistoryDialog", "Training History", nullptr));
        clearButton->setText(QCoreApplication::translate("HistoryDialog", "Clear History", nullptr));
        returnButton->setText(QCoreApplication::translate("HistoryDialog", "Return", nullptr));
        (void)HistoryDialog;
    } // retranslateUi

};

namespace Ui {
    class HistoryDialog: public Ui_HistoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYDIALOG_H
