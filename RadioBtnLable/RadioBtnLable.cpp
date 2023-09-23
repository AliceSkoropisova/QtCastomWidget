#include "RadioBtnLable.h"
#include "ui_RadioBtnLable.h"
#include <QMouseEvent>

RadioBtnLable::RadioBtnLable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RadioBtnLable)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(true);
}

RadioBtnLable::~RadioBtnLable()
{
    delete ui;
}

void RadioBtnLable::addBtn(QString str)
{
    NewWidget *btn= new NewWidget(this);
    btn->setText(str);

    btnLayout.addWidget(btn);
    scrollWidget.setLayout(&btnLayout);
    ui->scrollArea->setWidget(&scrollWidget);

    btn->setChecked(false);

    connect(btn, SIGNAL(clicked()), this, SLOT(btnActive()));  //соединяем сигнал клика со
                                                               //слотом "активации кнопки"
}

void RadioBtnLable::btnSetLable(int id)
{
    ui->label->setText(QString::number(id));

}

void RadioBtnLable::btnActive()
{
    NewWidget *b =(NewWidget*) sender(); //определяем кнопку, которая вызвала сигнал
    ui->label->setText(QString::number(b->getID()));
    b->setChecked(true);
}


