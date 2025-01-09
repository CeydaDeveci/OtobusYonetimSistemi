#include "biletlisteformu.h"
#include "ui_biletlisteformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/biletbs.h>

BiletListeFormu::BiletListeFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BiletListeFormu)
{
    ui->setupUi(this);
}

BiletListeFormu::~BiletListeFormu()
{
    delete ui;
}

const BiletListesi &BiletListeFormu::liste() const
{
    return _liste;
}

void BiletListeFormu::setListe(const BiletListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void BiletListeFormu::ekranGuncelle()
{
    ui->tblbiletliste->clear();
    ui->tblbiletliste->setColumnCount(4);
    QStringList Basliklar;
    Basliklar <<tr("Koltuk Numarası") <<tr("Bilet Fiyatı") <<tr("Sefer Yeri") <<tr("Sefer Tarihi");
    ui->tblbiletliste->setHorizontalHeaderLabels(Basliklar);
    ui->tblbiletliste->setRowCount(_liste.size());
    for(int i = 0;i<_liste.size();i++){
        const auto &nesne_i = _liste[i];
        QTableWidgetItem* hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->koltukNumarasi());
        ui->tblbiletliste->setItem(i,0, hucre);
        hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->biletFiyati());
        ui->tblbiletliste->setItem(i, 1, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->SeferYeri());
        ui->tblbiletliste->setItem(i, 2, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->SeferTarihi().toString());
        ui->tblbiletliste->setItem(i, 3, hucre);
    }
}
