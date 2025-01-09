#include "otobuslistesiislemi.h"
#include <Veri/data.h>
#include <Formlar/ListeFormlari/otobuslisteformu.h>

OtobusListesiIslemi::OtobusListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem=new QAction();
    _islem->setText(tr("Otobüs Veri Listesi Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Otobus.png"));
    connect(_islem, &QAction::triggered, this, &OtobusListesiIslemi::main);
}


void OtobusListesiIslemi::main()
{
    auto veri = Data::yellow().otobus().tumunuBul([](std::shared_ptr<OtobusBS>)
    {return true; });

    OtobusListeFormu *form = new OtobusListeFormu();


    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);


    form->show();
}

QAction *OtobusListesiIslemi::islem()
{
    return _islem;
}
