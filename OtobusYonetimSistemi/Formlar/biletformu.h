#ifndef BILETFORMU_H
#define BILETFORMU_H

#include <QWidget>
#include "TemelVeriFormu.h"
#include <Veri/VeriSiniflari/biletbs.h>

namespace Ui {
class BiletFormu;
}

class BiletFormu : public QWidget, public TemelVeriFormu<BiletPtr>
{
    Q_OBJECT

public:
    explicit BiletFormu(QWidget *parent = nullptr);
    ~BiletFormu();

private:
    Ui::BiletFormu *ui;
    // TemelVeriFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();

};

#endif // BILETFORMU_H
