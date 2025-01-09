#include "otobusformu.h"
#include "ui_otobusformu.h"

OtobusFormu::OtobusFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OtobusFormu)
{
    ui->setupUi(this);
}

OtobusFormu::~OtobusFormu()
{
    delete ui;
}


void OtobusFormu::ekranGuncelle()
{
    ui->leplaka->setText(_veri->otobusPlakasi());
    ui->levk->setText(_veri->valizKapasitesi());
    ui->sboks->setValue(_veri->otobusKoltukSayisi());
}

void OtobusFormu::veriGuncelle()
{
    _veri->setOtobusPlakasi(ui->leplaka->text());
    _veri->setOtobusKoltukSayisi(ui->sboks->value());
    _veri->setValizKapasitesi(ui->levk->text());
}
