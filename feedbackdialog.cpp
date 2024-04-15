#include "feedbackdialog.h"
#include "ui_feedbackdialog.h"

FeedbackDialog::FeedbackDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeedbackDialog)
{
    ui->setupUi(this);
}

FeedbackDialog::~FeedbackDialog()
{
    delete ui;
}

void FeedbackDialog::on_sendButton_clicked()
{
    QString feedback = ui->feedbackEdit->toPlainText();
    emit sendFeedback(feedback);
    close();
}

void FeedbackDialog::on_returnButton_clicked()
{
    close();
}
