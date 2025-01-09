#include "seyahatformu.h"
#include "ui_seyahatformu.h"

SeyahatFormu::SeyahatFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SeyahatFormu)
{
    ui->setupUi(this);
}

SeyahatFormu::~SeyahatFormu()
{
    delete ui;
}


void SeyahatFormu::ekranGuncelle()
{
    ui->lekalkis->setText(_veri->KalkisYeri());
    ui->levaris->setText(_veri->VarisYeri());
    ui->dtekalkis->setDateTime(_veri->KalkisTarihi());
    ui->dtevaris->setDateTime(_veri->VarisTarihi());
}

void SeyahatFormu::veriGuncelle()
{
    _veri->setKalkisYeri(ui->lekalkis->text());
    _veri->setKalkisTarihi(ui->dtekalkis->dateTime());
    _veri->setVarisYeri(ui->levaris->text());
    _veri->setVarisTarihi(ui->dtevaris->dateTime());
}
