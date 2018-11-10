#include "widget.h"
#include "ui_widget.h"
#include "stdio.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //this->setWindowFlags(Qt::WindowCloseButtonHint);保留关闭
    //this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//取消最大化、最小化、关闭

}

Widget::~Widget()
{
    //ui->lineEdit->document()->setMaximumBlockCount (0);
    //lineEdit->setMaxLength(3); //设置输入最大字符数量为3
    delete ui;

}

void Widget::on_pushButton_clicked()
{
    ui->lineEdit->insert("1");//显示到输入条中
}

void Widget::on_pushButton_3_clicked()
{
    ui->lineEdit->insert("2");
}

void Widget::on_pushButton_4_clicked()
{
    ui->lineEdit->insert("3");
}

void Widget::on_pushButton_5_clicked()
{
    ui->lineEdit->insert("4");
}

void Widget::on_pushButton_6_clicked()
{
    ui->lineEdit->insert("5");
}

void Widget::on_pushButton_7_clicked()
{
    ui->lineEdit->insert("6");
}

void Widget::on_pushButton_11_clicked()
{
    ui->lineEdit->insert("7");
}

void Widget::on_pushButton_12_clicked()
{
    ui->lineEdit->insert("8");
}

void Widget::on_pushButton_13_clicked()
{
    ui->lineEdit->insert("9");
}

void Widget::on_pushButton_14_clicked()
{
    ui->lineEdit->insert("0");
}

void Widget::on_pushButton_10_clicked()
{
    ui->lineEdit->insert("A");
}

void Widget::on_pushButton_15_clicked()
{
    ui->lineEdit->insert("B");
}

void Widget::on_pushButton_16_clicked()
{
    ui->lineEdit->insert("C");
}

void Widget::on_pushButton_17_clicked()
{
    ui->lineEdit->insert("D");
}

void Widget::on_pushButton_18_clicked()
{
    ui->lineEdit->insert("E");
}

void Widget::on_pushButton_19_clicked()
{
    ui->lineEdit->insert("F");
}

void Widget::on_pushButton_20_clicked()
{
    ui->lineEdit->insert("G");
}

void Widget::on_pushButton_21_clicked()
{
    ui->lineEdit->insert("H");
}

void Widget::on_pushButton_22_clicked()
{
    ui->lineEdit->insert("I");
}

void Widget::on_pushButton_23_clicked()
{
    ui->lineEdit->insert("J");
}

void Widget::on_pushButton_24_clicked()
{
    ui->lineEdit->insert("K");
}

void Widget::on_pushButton_25_clicked()
{
    ui->lineEdit->insert("L");
}

void Widget::on_pushButton_26_clicked()
{
    ui->lineEdit->insert("M");
}

void Widget::on_pushButton_27_clicked()
{
    ui->lineEdit->insert("N");
}

void Widget::on_pushButton_28_clicked()
{
    ui->lineEdit->insert("O");
}

void Widget::on_pushButton_29_clicked()
{
    ui->lineEdit->insert("P");
}

void Widget::on_pushButton_30_clicked()
{
    ui->lineEdit->insert("Q");
}

void Widget::on_pushButton_31_clicked()
{
    ui->lineEdit->insert("R");
}

void Widget::on_pushButton_32_clicked()
{
    ui->lineEdit->insert("S");
}

void Widget::on_pushButton_33_clicked()
{
    ui->lineEdit->insert("T");
}

void Widget::on_pushButton_34_clicked()
{
    ui->lineEdit->insert("U");
}

void Widget::on_pushButton_35_clicked()
{
    ui->lineEdit->insert("V");
}

void Widget::on_pushButton_36_clicked()
{
    ui->lineEdit->insert("W");
}

void Widget::on_pushButton_37_clicked()
{
    ui->lineEdit->insert("X");
}

void Widget::on_pushButton_38_clicked()
{
    ui->lineEdit->insert("Y");
}

void Widget::on_pushButton_39_clicked()
{
    ui->lineEdit->insert("Z");
}

void Widget::on_pushButton_9_clicked()
{
    QString line;
    line = ui->lineEdit->text(); //获取输入条中的数据
    line.chop(1); //倒位删除，即是从字符串后面开始按位删除
    ui->lineEdit->clear();//清空
    ui->lineEdit->insert(line);//重新放入数据
}

void Widget::on_pushButton_2_clicked()
{
    QString nnn;
    QString zzz="ABC" ;
    nnn = ui->lineEdit->text();
    if (nnn.isEmpty())//判断是否未输入
    {
        new_dialog = new dialog;
        new_dialog->show();
    }
     else
    {if(nnn==zzz)//判断密码是否正确
        {
            new_dialog4 = new dialog4;
            new_dialog4->show();
        }
       else
        {
            new_dialog3 = new dialog3;
            new_dialog3->show();
        }
    }
 }
