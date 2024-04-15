#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "feedbackdialog.h"
#include "historydialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addEntry();
    void deleteEntry();
    void logout();
    void openFeedbackDialog();
    void sendFeedback(const QString &feedback);
    void showHistory();

private:
    void updateTime();
    void saveEntryToFile(const QString &entry, const QString &dateTimeStr);
    QStringList readEntriesFromFile();

    Ui::MainWindow *ui;
    QTimer *timer;
    FeedbackDialog *feedbackDialog;
};
#endif // MAINWINDOW_H
