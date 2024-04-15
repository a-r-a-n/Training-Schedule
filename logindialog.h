#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

signals:
    void loginSuccessful();

private slots:
    void attemptLogin();

private:
    Ui::LoginDialog *ui;

    QString username;
    QString password;

    bool authenticate(const QString &enteredUsername, const QString &enteredPassword);
};

#endif // LOGINDIALOG_H
