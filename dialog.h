#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class dialog;
}

class dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog *ui;
};

#endif // DIALOG_H
