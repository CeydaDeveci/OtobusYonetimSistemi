#ifndef CALISANFORMU_H
#define CALISANFORMU_H

#include <QWidget>
#include "TemelVeriFormu.h"
#include <Veri/VeriSiniflari/calisanbs.h>

namespace Ui {
class CalisanFormu;
}

class CalisanFormu : public QWidget, public TemelVeriFormu<CalisanPtr>
{
    Q_OBJECT

public:
    explicit CalisanFormu(QWidget *parent = nullptr);
    ~CalisanFormu();

private:
    Ui::CalisanFormu *ui;

    // TemelVeriFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();
};

#endif // CALISANFORMU_H
