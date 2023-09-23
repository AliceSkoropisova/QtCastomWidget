#ifndef RADIOBTNLABLE_H
#define RADIOBTNLABLE_H
#include <Qt>
#include <QRadioButton>
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QMainWindow>
#include "RadioBtnLable_global.h"
#include "btnstruct.h"

QT_BEGIN_NAMESPACE
namespace Ui { class RadioBtnLable; }
QT_END_NAMESPACE



class RADIOBTNLABLE_EXPORT RadioBtnLable: public QWidget
{
    Q_OBJECT

public:
    RadioBtnLable(QWidget *parent);
    ~RadioBtnLable();

    QVBoxLayout btnLayout ;
    QWidget scrollWidget;

    int getBtnId();

signals:
    void btnClicked(int);

public slots:
    void btnActive();

public slots:
    void btnSetLable( int id);

public:
    void addBtn(QString str);

public:
     Ui::RadioBtnLable *ui;
};

#endif // RADIOBTNLABLE_H



