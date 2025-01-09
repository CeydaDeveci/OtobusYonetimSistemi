#ifndef SEYAHATFORMU_H
#define SEYAHATFORMU_H

#include <QWidget>
#include "TemelVeriFormu.h"
#include <Veri/VeriSiniflari/seyahatbs.h>

namespace Ui {
class SeyahatFormu;
}

class SeyahatFormu : public QWidget, public TemelVeriFormu<SeyahatPtr>
{
    Q_OBJECT

public:
    explicit SeyahatFormu(QWidget *parent = nullptr);
    ~SeyahatFormu();

private:
    Ui::SeyahatFormu *ui;

    // TemelVeriFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();

};

#endif // SEYAHATFORMU_H
