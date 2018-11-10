#include "dialog4.h"
#include "ui_dialog4.h"

dialog4::dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog4)
{
    ui->setupUi(this);
}

dialog4::~dialog4()
{
    delete ui;
}

void dialog4::on_pushButton_clicked()
{
    this->close();
}
