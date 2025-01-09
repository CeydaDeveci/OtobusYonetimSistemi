#include "yolculisteformu.h"
#include "ui_yolculisteformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/yolcubs.h>

YolcuListeFormu::YolcuListeFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::YolcuListeFormu)
{
    ui->setupUi(this);
}

YolcuListeFormu::~YolcuListeFormu()
{
    delete ui;
}

const YolcuListesi &YolcuListeFormu::liste() const
{
    return _liste;
}

void YolcuListeFormu::setListe(const YolcuListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void YolcuListeFormu::ekranGuncelle()
{
    ui->tblyolculiste->clear();
    ui->tblyolculiste->setColumnCount(6);
    QStringList Basliklar;
    Basliklar <<tr("Adı") <<tr("Soyadı") <<tr("TcKimlikNo") <<tr("Cinsiyet")
             << tr("HesKodu") << tr("Bilet Numarası");
    ui->tblyolculiste->setHorizontalHeaderLabels(Basliklar);
    ui->tblyolculiste->setRowCount(_liste.size());
    for(int i = 0;i<_liste.size();i++){
        const auto &nesne_i = _liste[i];
        QTableWidgetItem* hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->Ad());
        ui->tblyolculiste->setItem(i,0, hucre);
        hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->SoyAd());
        ui->tblyolculiste->setItem(i, 1, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->TcKimlikNo());
        ui->tblyolculiste->setItem(i, 2, hucre);
        hucre =new QTableWidgetItem;

        if(nesne_i->Cinsiyet()==1){
            hucre->setText("Kadin");}

        if(nesne_i->Cinsiyet()==2){
            hucre->setText("Erkek");
        }
        /*hucre->setText(nesne_i.Cinsiyet());
        ui->tblcalisanlistesi->setItem(i, 3, hucre);*/

        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->HesKodu());
        ui->tblyolculiste->setItem(i, 4, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->BiletNumarasi());
        ui->tblyolculiste->setItem(i, 5, hucre);

    }
}
