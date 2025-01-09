#include "seyahatlisteformu.h"
#include "ui_seyahatlisteformu.h"
#include <QStringList>
#include <QTableWidgetItem>
#include <Veri/VeriSiniflari/seyahatbs.h>

SeyahatListeFormu::SeyahatListeFormu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SeyahatListeFormu)
{
    ui->setupUi(this);
}

SeyahatListeFormu::~SeyahatListeFormu()
{
    delete ui;
}

const SeyahatListesi &SeyahatListeFormu::liste() const
{
    return _liste;
}

void SeyahatListeFormu::setListe(const SeyahatListesi &newListe)
{
    _liste = newListe;
    ekranGuncelle();
}

void SeyahatListeFormu::ekranGuncelle()
{
    ui->tblseyahatliste->clear();
    ui->tblseyahatliste->setColumnCount(4);
    QStringList Basliklar;
    Basliklar <<tr("Kalkış Yeri") <<tr("Kalkış Tarihi") <<tr("Varış Yeri") <<tr("Varış Tarihi");
    ui->tblseyahatliste->setHorizontalHeaderLabels(Basliklar);
    ui->tblseyahatliste->setRowCount(_liste.size());
    for(int i = 0;i<_liste.size();i++){
        const auto &nesne_i = _liste[i];
        QTableWidgetItem* hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->KalkisYeri());
        ui->tblseyahatliste->setItem(i, 0, hucre);
        hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->KalkisTarihi().toString());
        ui->tblseyahatliste->setItem(i, 1, hucre);
        hucre= new QTableWidgetItem;
        hucre->setText(nesne_i->VarisYeri());
        ui->tblseyahatliste->setItem(i, 2, hucre);
        hucre = new QTableWidgetItem;
        hucre->setText(nesne_i->VarisTarihi().toString());
        ui->tblseyahatliste->setItem(i, 3, hucre);
        }
}
