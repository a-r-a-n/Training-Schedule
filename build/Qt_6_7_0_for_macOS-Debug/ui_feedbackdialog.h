/********************************************************************************
** Form generated from reading UI file 'feedbackdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACKDIALOG_H
#define UI_FEEDBACKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedbackDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *feedbackEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendButton;
    QPushButton *returnButton;

    void setupUi(QDialog *FeedbackDialog)
    {
        if (FeedbackDialog->objectName().isEmpty())
            FeedbackDialog->setObjectName("FeedbackDialog");
        FeedbackDialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(FeedbackDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 361, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        feedbackEdit = new QTextEdit(verticalLayoutWidget);
        feedbackEdit->setObjectName("feedbackEdit");

        verticalLayout->addWidget(feedbackEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        sendButton = new QPushButton(verticalLayoutWidget);
        sendButton->setObjectName("sendButton");

        horizontalLayout->addWidget(sendButton);

        returnButton = new QPushButton(verticalLayoutWidget);
        returnButton->setObjectName("returnButton");

        horizontalLayout->addWidget(returnButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FeedbackDialog);

        QMetaObject::connectSlotsByName(FeedbackDialog);
    } // setupUi

    void retranslateUi(QDialog *FeedbackDialog)
    {
        FeedbackDialog->setWindowTitle(QCoreApplication::translate("FeedbackDialog", "Feedback Dialog", nullptr));
        label->setText(QCoreApplication::translate("FeedbackDialog", "Please provide your feedback:", nullptr));
        sendButton->setText(QCoreApplication::translate("FeedbackDialog", "Send", nullptr));
        returnButton->setText(QCoreApplication::translate("FeedbackDialog", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FeedbackDialog: public Ui_FeedbackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACKDIALOG_H
