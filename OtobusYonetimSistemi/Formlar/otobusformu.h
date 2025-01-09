#ifndef OTOBUSFORMU_H
#define OTOBUSFORMU_H

#include <QWidget>
#include "TemelVeriFormu.h"
#include <Veri/VeriSiniflari/otobusbs.h>

namespace Ui {
class OtobusFormu;
}

class OtobusFormu : public QWidget, public TemelVeriFormu<OtobusPtr>
{
    Q_OBJECT

public:
    explicit OtobusFormu(QWidget *parent = nullptr);
    ~OtobusFormu();

private:
    Ui::OtobusFormu *ui;

    // TemelVeriFormu interface
public:
    void ekranGuncelle() override;
    void veriGuncelle() override;
signals:
    void veriKaydet();

};

#endif // OTOBUSFORMU_H
