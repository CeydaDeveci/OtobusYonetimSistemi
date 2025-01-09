#include "otobuslisteformu.h"
#include "ui_otobuslisteformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/otobusbs.h>

OtobusListeFormu::OtobusListeFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OtobusListeFormu)
{
    ui->setupUi(this);
}

OtobusListeFormu::~OtobusListeFormu()
{
    delete ui;
}

const OtobusListesi &OtobusListeFormu::liste() const
{
    return _liste;
}

void OtobusListeFormu::setListe(const OtobusListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void OtobusListeFormu::ekranGuncelle()
{
    ui->tblotobusliste->clear();
    ui->tblotobusliste->setColumnCount(3);
    QStringList Basliklar;
    Basliklar <<tr("Otobüs Plakaları") <<tr("Koltuk Sayısı") <<tr("Valiz Kapasitesi");
    ui->tblotobusliste->setHorizontalHeaderLabels(Basliklar);
    ui->tblotobusliste->setRowCount(_liste.size());
    for(int i = 0;i<_liste.size();i++){
        const auto &nesne_i = _liste[i];
        QTableWidgetItem* hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->otobusPlakasi());
        ui->tblotobusliste->setItem(i,0, hucre);
        hucre= new QTableWidgetItem;
        hucre->setText(tr("%1").arg(nesne_i->otobusKoltukSayisi()));
        ui->tblotobusliste->setItem(i, 1, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->valizKapasitesi());
        ui->tblotobusliste->setItem(i, 2, hucre);
    }
}
