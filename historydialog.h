// historydialog.h

#ifndef HISTORYDIALOG_H
#define HISTORYDIALOG_H

#include <QDialog>
#include <QStringList>

namespace Ui {
class HistoryDialog;
}

class HistoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryDialog(QWidget *parent = nullptr);
    ~HistoryDialog();

    void addEntries(const QStringList &entries);

private slots:
    void clearHistory();
    void returnClicked();

private:
    Ui::HistoryDialog *ui;
};

#endif // HISTORYDIALOG_H
