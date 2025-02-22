#include "historydialog.h"
#include "ui_historydialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

HistoryDialog::HistoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryDialog)
{
    ui->setupUi(this);

    connect(ui->returnButton, &QPushButton::clicked, this, &HistoryDialog::returnClicked);
    connect(ui->clearButton, &QPushButton::clicked, this, &HistoryDialog::clearHistory);

    // Load history from file when dialog is created
    QFile file("history.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QStringList entries;
        while (!in.atEnd()) {
            QString line = in.readLine();
            entries.append(line); 
        }
        file.close();
        addEntries(entries); 
    } else {
        QMessageBox::warning(this, "Error", "Unable to load history.");
    }
}

HistoryDialog::~HistoryDialog()
{
    delete ui;
}

void HistoryDialog::addEntries(const QStringList &entries)
{
    ui->historyListWidget->clear();
    ui->historyListWidget->addItems(entries);
}

void HistoryDialog::clearHistory()
{
    ui->historyListWidget->clear();

    QFile file("history.txt");
    if (file.remove()) {
        QMessageBox::information(this, "History Cleared", "History has been cleared successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to clear history.");
    }
}

void HistoryDialog::returnClicked()
{
    this->close();
}
