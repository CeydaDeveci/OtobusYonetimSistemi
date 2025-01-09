#include "calisanlistesiislemi.h"
#include <Veri/data.h>
#include <Formlar/ListeFormlari/calisanlisteformu.h>

CalisanListesiIslemi::CalisanListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction;
    _islem->setText(tr("Çalışan Veri Listesi Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Calisan.png"));
    connect(_islem, &QAction::triggered, this, &CalisanListesiIslemi::main);
}


void CalisanListesiIslemi::main()
{
     auto veri = Data::yellow().calisan().tumunuBul([](std::shared_ptr<CalisanBS>)
     {return true; });

     CalisanListeFormu *form= new CalisanListeFormu();
     form->setListe(veri);


     form->setAttribute(Qt::WA_DeleteOnClose);
     form->setWindowModality(Qt::ApplicationModal);

     form->show();
}

QAction *CalisanListesiIslemi::islem()
{
    return _islem;
}
