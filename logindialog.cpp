#include "logindialog.h"
#include "ui_logindialog.h"
#include "mainwindow.h"

#include <QMessageBox>
#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    connect(ui->loginButton, &QPushButton::clicked, this, &LoginDialog::attemptLogin);
    connect(ui->exitButton, &QPushButton::clicked, this, &QDialog::reject);

    
    username = "admin";
    password = "1234";
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::attemptLogin()
{
    QString enteredUsername = ui->usernameEdit->text();
    QString enteredPassword = ui->passwordEdit->text();

    if (authenticate(enteredUsername, enteredPassword)) {
        accept();


        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
    } else {
        QMessageBox::warning(this, "Login Failed", "Authentication failed. Please try again.");
    }
}

bool LoginDialog::authenticate(const QString &enteredUsername, const QString &enteredPassword)
{
    return (enteredUsername == username && enteredPassword == password);
}
