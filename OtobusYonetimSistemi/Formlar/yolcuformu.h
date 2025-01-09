#ifndef YOLCUFORMU_H
#define YOLCUFORMU_H

#include <QWidget>
#include "TemelVeriFormu.h"
#include <Veri/VeriSiniflari/yolcubs.h>

namespace Ui {
class YolcuFormu;
}

class YolcuFormu : public QWidget, public TemelVeriFormu<YolcuPtr>
{
    Q_OBJECT

public:
    explicit YolcuFormu(QWidget *parent = nullptr);
    ~YolcuFormu();

private:
    Ui::YolcuFormu *ui;

    // TemelVeriFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();

};

#endif // YOLCUFORMU_H
