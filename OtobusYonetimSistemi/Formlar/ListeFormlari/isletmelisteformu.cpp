#include "isletmelisteformu.h"
#include "ui_isletmelisteformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/isletmebs.h>

IsletmeListeFormu::IsletmeListeFormu(IsletmeBSDeposu &depo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IsletmeListeFormu), _depo(depo)
{
    ui->setupUi(this);
}

IsletmeListeFormu::~IsletmeListeFormu()
{
    delete ui;
}

const IsletmeListesi &IsletmeListeFormu::liste() const
{
    return _liste;
}

void IsletmeListeFormu::setListe(const IsletmeListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void IsletmeListeFormu::ekranGuncelle() {
    ui->tblIsletmeListesi->setColumnCount(4);
    ui->tblIsletmeListesi->clear();
    QStringList Basliklar;
    Basliklar <<tr("İşletme Adı") <<tr("Ruhsat Numarasi")
             <<tr("Adres")<<tr("Telefon Numarası");
    ui->tblIsletmeListesi->setHorizontalHeaderLabels(Basliklar);
    ui->tblIsletmeListesi->setRowCount(_liste.size());
    for(int i = 0; i<_liste.size();i++){
        const auto &nesne_i = _liste[i];
        QTableWidgetItem* hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->isletmeAdi());
        ui->tblIsletmeListesi->setItem(i, 0, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->ruhsatNumarasi());
        ui->tblIsletmeListesi->setItem(i, 1, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Adres());
        ui->tblIsletmeListesi->setItem(i, 2, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->Telefon());
        ui->tblIsletmeListesi->setItem(i, 3, hucre);

    }
}
