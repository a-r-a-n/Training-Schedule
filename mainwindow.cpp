#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "historydialog.h"
#include <QMessageBox>
#include <QDateTime>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addEntry);
    connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::deleteEntry);
    connect(ui->logoutButton, &QPushButton::clicked, this, &MainWindow::logout);
    connect(ui->feedbackButton, &QPushButton::clicked, this, &MainWindow::openFeedbackDialog);
    connect(ui->historyButton, &QPushButton::clicked, this, &MainWindow::showHistory);

    ui->dateEdit->setDate(QDate::currentDate());
    ui->timeEdit->setTime(QTime::currentTime());

    updateTime();

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000);

    feedbackDialog = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeStr = currentDateTime.toString("yyyy-MM-dd hh:mm:ss AP");
    ui->dateTimeLabel->setText(dateTimeStr);
}

void MainWindow::addEntry()
{
    QString entry = ui->entryEdit->text().trimmed();
    QDate date = ui->dateEdit->date();
    QTime time = ui->timeEdit->time();
    if (!entry.isEmpty()) {
        QString dateTimeStr = QDateTime(date, time).toString("yyyy-MM-dd hh:mm AP");

        QWidget *widget = new QWidget(ui->entriesList);
        QHBoxLayout *layout = new QHBoxLayout(widget);
        layout->setContentsMargins(0, 0, 0, 0);
        QLabel *entryLabel = new QLabel(entry);
        QLabel *dateTimeLabel = new QLabel(dateTimeStr);
        QFont font("Helvetica");
        entryLabel->setFont(font);
        dateTimeLabel->setFont(font);

        layout->addWidget(entryLabel);
        layout->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Preferred));
        layout->addWidget(dateTimeLabel);

        QListWidgetItem *item = new QListWidgetItem(ui->entriesList);
        item->setSizeHint(widget->sizeHint());
        ui->entriesList->setItemWidget(item, widget);

        saveEntryToFile(entry, dateTimeStr);

        ui->entryEdit->clear();
        ui->dateEdit->setDate(QDate::currentDate());
        ui->timeEdit->setTime(QTime::currentTime());
    } else {
        QMessageBox::warning(this, "Empty Entry", "Please enter a valid training entry.");
    }
}

void MainWindow::deleteEntry()
{
    QListWidgetItem *selectedItem = ui->entriesList->currentItem();
    if (selectedItem) {
        delete ui->entriesList->takeItem(ui->entriesList->row(selectedItem));
    } else {
        QMessageBox::information(this, "No Entry Selected", "Please select an entry to delete.");
    }
}

void MainWindow::logout()
{
    QMessageBox::information(this, "Logged Out", "You have been successfully logged out.");
    this->close();
}

void MainWindow::openFeedbackDialog()
{
    feedbackDialog = new FeedbackDialog(this);
    connect(feedbackDialog, &FeedbackDialog::sendFeedback, this, &MainWindow::sendFeedback);
    feedbackDialog->exec();
}

void MainWindow::sendFeedback(const QString &feedback)
{
    QMessageBox::information(this, "Feedback Sent", "Thank you for your feedback!");
    if (feedbackDialog && feedbackDialog->isVisible()) {
        feedbackDialog->close();
    }
}

void MainWindow::showHistory()
{
    QStringList historyEntries = readEntriesFromFile();
    HistoryDialog *historyDialog = new HistoryDialog(this);
    historyDialog->addEntries(historyEntries);
    historyDialog->exec();
}

void MainWindow::saveEntryToFile(const QString &entry, const QString &dateTimeStr)
{
    QFile file("history.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << entry << " - " << dateTimeStr << Qt::endl;
        file.close();
    }
}

QStringList MainWindow::readEntriesFromFile()
{
    QStringList entries;
    QFile file("history.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            entries << in.readLine();
        }
        file.close();
    }
    return entries;
}
