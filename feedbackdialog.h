#ifndef FEEDBACKDIALOG_H
#define FEEDBACKDIALOG_H

#include <QDialog>

namespace Ui {
class FeedbackDialog;
}

class FeedbackDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FeedbackDialog(QWidget *parent = nullptr);
    ~FeedbackDialog();

signals:
    void sendFeedback(const QString &feedback);

private slots:
    void on_sendButton_clicked();
    void on_returnButton_clicked();

private:
    Ui::FeedbackDialog *ui;
};

#endif
