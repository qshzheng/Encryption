#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>

namespace Ui {
class dialog4;
}

class dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit dialog4(QWidget *parent = 0);
    ~dialog4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog4 *ui;
};

#endif // DIALOG4_H
