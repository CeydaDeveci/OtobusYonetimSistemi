#ifndef ISLETMEFORMU_H
#define ISLETMEFORMU_H

#include <QWidget>
#include "TemelVeriFormu.h"
#include <Veri/VeriSiniflari/isletmebs.h>

namespace Ui {
class IsletmeFormu;
}

class IsletmeFormu : public QWidget, public TemelVeriFormu<IsletmePtr>
{
    Q_OBJECT

public:
    explicit IsletmeFormu(QWidget *parent = nullptr);
    ~IsletmeFormu();

private:
    Ui::IsletmeFormu *ui;

    // TemelVeriFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();

};

#endif // ISLETMEFORMU_H
