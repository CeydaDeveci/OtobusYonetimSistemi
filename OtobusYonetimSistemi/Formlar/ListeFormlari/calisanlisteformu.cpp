#include "calisanlisteformu.h"
#include "ui_calisanlisteformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/calisanbs.h>

CalisanListeFormu::CalisanListeFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalisanListeFormu)
{
    ui->setupUi(this);
}

CalisanListeFormu::~CalisanListeFormu()
{
    delete ui;
}

const CalisanListesi &CalisanListeFormu::liste() const
{
    return _liste;
}

void CalisanListeFormu::setListe(const CalisanListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void CalisanListeFormu::ekranGuncelle()
{
    ui->tblcalisanlistesi->clear();
    ui->tblcalisanlistesi->setColumnCount(7);
    QStringList Basliklar;
    Basliklar <<tr("Adı") <<tr("Soyadı") <<tr("TcKimlikNo") <<tr("Cinsiyet")
             << tr("HesKodu") << tr("Telefon Numarası") << tr("Görevi");
    ui->tblcalisanlistesi->setHorizontalHeaderLabels(Basliklar);
    ui->tblcalisanlistesi->setRowCount(_liste.size());
    for(int i = 0;i<_liste.size();i++){
        const auto &nesne_i = _liste[i];
        QTableWidgetItem* hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->Ad());
        ui->tblcalisanlistesi->setItem(i,0, hucre);
        hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->SoyAd());
        ui->tblcalisanlistesi->setItem(i, 1, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->TcKimlikNo());
        ui->tblcalisanlistesi->setItem(i, 2, hucre);
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
        ui->tblcalisanlistesi->setItem(i, 4, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->telefon());
        ui->tblcalisanlistesi->setItem(i, 5, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Gorevi());
        ui->tblcalisanlistesi->setItem(i, 6, hucre);


    }


}
