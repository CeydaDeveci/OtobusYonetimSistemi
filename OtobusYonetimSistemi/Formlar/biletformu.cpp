#include "biletformu.h"
#include "ui_biletformu.h"

BiletFormu::BiletFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BiletFormu)
{
    ui->setupUi(this);
}

BiletFormu::~BiletFormu()
{
    delete ui;
}


void BiletFormu::ekranGuncelle()
{
    ui->lebiletfiyati->setText(_veri->biletFiyati());
    ui->lekoltukno->setText(_veri->koltukNumarasi());
    ui->leseferyeri->setText(_veri->SeferYeri());
    ui->dtesefertarihi->setDateTime(_veri->SeferTarihi());
}

void BiletFormu::veriGuncelle()
{
    _veri->setBiletFiyati(ui->lebiletfiyati->text());
    _veri->setKoltukNumarasi(ui->lekoltukno->text());
    _veri->setSeferYeri(ui->leseferyeri->text());
    _veri->setSeferTarihi(ui->dtesefertarihi->dateTime());
}
