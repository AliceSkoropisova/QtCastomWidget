#include "btnstruct.h"


NewWidget::NewWidget(QWidget *parent) :
    QRadioButton(parent)
{
    SumID++;
    btnID = SumID;
}


NewWidget::~NewWidget(){}

int NewWidget::getID()
{
    return btnID;
}

int NewWidget::SumID = 0;
