#ifndef BTNSTRUCT_H
#define BTNSTRUCT_H
#include <QRadioButton>
//структура кнопки виджета
class NewWidget : public QRadioButton
{
    Q_OBJECT
public:
    explicit NewWidget(QWidget *parent = 0 );
    ~NewWidget();
    static int SumID;  //счетчик номеров кнопки
    int getID();
private:
    int btnID = 0; //номер кнопки

};
#endif // BTNSTRUCT_H

