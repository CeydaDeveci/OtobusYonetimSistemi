#include "biletlistesiislemi.h"
#include <Veri/data.h>
#include <Formlar/ListeFormlari/biletlisteformu.h>

BiletListesiIslemi::BiletListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction;
    _islem->setText(tr("Bilet Veri Listesi Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Bilet.png"));
    connect(_islem, &QAction::triggered, this, &BiletListesiIslemi::main);
}


void BiletListesiIslemi::main()
{
     auto veri = Data::yellow().bilet().tumunuBul([](std::shared_ptr<BiletBS>)
     {return true; });

     BiletListeFormu *form= new BiletListeFormu();

     form->setListe(veri);

     form->setAttribute(Qt::WA_DeleteOnClose);
     form->setWindowModality(Qt::ApplicationModal);

     form->show();
}

QAction *BiletListesiIslemi::islem()
{
    return _islem;
}
