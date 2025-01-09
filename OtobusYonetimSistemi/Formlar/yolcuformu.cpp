#include "yolcuformu.h"
#include "ui_yolcuformu.h"

YolcuFormu::YolcuFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YolcuFormu)
{
    ui->setupUi(this);
}

YolcuFormu::~YolcuFormu()
{
    delete ui;
}


void YolcuFormu::ekranGuncelle()
{
    ui->lead->setText(_veri->Ad());
    ui->lesoyad->setText(_veri->SoyAd());
    ui->leheskodu->setText(_veri->HesKodu());
    ui->letcno->setText(_veri->TcKimlikNo());
    ui->rberkek->setChecked(_veri->Cinsiyet()==Erkek);
    ui->rbkadin->setChecked(_veri->Cinsiyet()==Kadin);
    ui->lebiletno->setText(_veri->BiletNumarasi());
}

void YolcuFormu::veriGuncelle()
{
    _veri->setAd(ui->lead->text());
    _veri->setSoyAd(ui->lesoyad->text());
    _veri->setHesKodu(ui->leheskodu->text());
    _veri->setTcKimlikNo(ui->letcno->text());
    if(ui->rberkek->isChecked()){
        _veri->setCinsiyet(Erkek);
    }
    if(ui->rbkadin->isChecked()){
        _veri->setCinsiyet(Kadin);
    }
    _veri->setBiletNumarasi(ui->lebiletno->text());
}
