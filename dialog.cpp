#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//取消最大化、最小化、关闭
}

dialog::~dialog()
{
    delete ui;
}

void dialog::on_pushButton_clicked()
{
    this->close();
}
