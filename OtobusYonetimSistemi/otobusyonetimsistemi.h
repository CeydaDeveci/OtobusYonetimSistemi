#ifndef OTOBUSYONETIMSISTEMI_H
#define OTOBUSYONETIMSISTEMI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class OtobusYonetimSistemi; }
QT_END_NAMESPACE

class OtobusYonetimSistemi : public QMainWindow
{
    Q_OBJECT

public:
    OtobusYonetimSistemi(QWidget *parent = nullptr);
    ~OtobusYonetimSistemi();

private:
    Ui::OtobusYonetimSistemi *ui;
};
#endif // OTOBUSYONETIMSISTEMI_H
