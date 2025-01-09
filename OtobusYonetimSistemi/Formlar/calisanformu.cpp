#include "calisanformu.h"
#include "ui_calisanformu.h"

CalisanFormu::CalisanFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalisanFormu)
{
    ui->setupUi(this);
}

CalisanFormu::~CalisanFormu()
{
    delete ui;
}


void CalisanFormu::ekranGuncelle()
{
    ui->lead->setText(_veri->Ad());
    ui->lesoyad->setText(_veri->SoyAd());
    ui->leheskodu->setText(_veri->HesKodu());
    ui->letcno->setText(_veri->TcKimlikNo());
    ui->letel->setText(_veri->telefon());
    ui->rberkek->setChecked(_veri->Cinsiyet()==Erkek);
    ui->rbkadin->setChecked(_veri->Cinsiyet()==Kadin);
    ui->legorevi->setText(_veri->Gorevi());
}

void CalisanFormu::veriGuncelle()
{
    _veri->setAd(ui->lead->text());
    _veri->setSoyAd(ui->lesoyad->text());
    _veri->setHesKodu(ui->leheskodu->text());
    _veri->setTcKimlikNo(ui->letcno->text());
    _veri->setTelefon(ui->letel->text());
    if(ui->rberkek->isChecked()){
        _veri->setCinsiyet(Erkek);
    }
    if(ui->rbkadin->isChecked()){
        _veri->setCinsiyet(Kadin);
    }
    _veri->setGorevi(ui->legorevi->text());

}
