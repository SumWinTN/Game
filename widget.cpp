#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    per[0]=new person(1);
    ui->pushButton->setIcon(QIcon("../Game/image/wea_0/wea_0_0.bmp"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QMessageBox User;
    User.setWindowTitle("设置");
    QPushButton *yes=User.addButton("",QMessageBox::ActionRole);
    QPushButton *no=User.addButton("",QMessageBox::ActionRole);
    QPushButton *cancel=User.addButton("",QMessageBox::ActionRole);

    yes->setFlat(true);//去掉边框
    yes->setIconSize(QSize(50,50));
    yes->setIcon(QIcon("../Game/image/wea_0/wea_0_0.bmp"));
    no->setFlat(true);//去掉边框
    no->setIconSize(QSize(50,50));
    no->setIcon(QIcon("../Game/image/wea_0/wea_0_1.bmp"));
    cancel->setFlat(true);//去掉边框
    cancel->setIconSize(QSize(50,50));
    cancel->setIcon(QIcon("../Game/image/wea_0/wea_0_2.bmp"));
    User.setText("升级");
    User.setIconPixmap(QPixmap("../Game/image/wea_0/wea_0_0.bmp"));
    User.exec();
    if(User.clickedButton()==yes)
        ui->label->setText("选择Yes");
    if(User.clickedButton()==no)
        ui->label->setText("选择No");
    if(User.clickedButton()==cancel)
        ui->label->setText("选择Cancel");
}

