#include "isletmeformu.h"
#include "ui_isletmeformu.h"

IsletmeFormu::IsletmeFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IsletmeFormu)
{
    ui->setupUi(this);
    connect(ui->pbkaydet,SIGNAL(clicked()),this,SIGNAL(veriKaydet()));
}

IsletmeFormu::~IsletmeFormu()
{
    delete ui;
}


void IsletmeFormu::ekranGuncelle()
{
    ui->leisletmeadi->setText(_veri->isletmeAdi());
    ui->leruhsatno->setText(_veri->ruhsatNumarasi());
    ui->letelefon->setText(_veri->Telefon());
    ui->pteadres->setPlainText(_veri->Adres());
}

void IsletmeFormu::veriGuncelle()
{
    _veri->setIsletmeAdi(ui->leisletmeadi->text());
    _veri->setRuhsatNumarasi(ui->leruhsatno->text());
    _veri->setTelefon(ui->letelefon->text());
    _veri->setAdres(ui->pteadres->toPlainText());
}
