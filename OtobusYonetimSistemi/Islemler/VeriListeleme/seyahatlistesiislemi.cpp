#include "seyahatlistesiislemi.h"
#include <Veri/data.h>
#include <Formlar/ListeFormlari/seyahatlisteformu.h>

SeyahatListesiIslemi::SeyahatListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem=new QAction();
    _islem->setText(tr("Seyahat Veri Giriş Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Seyahat.png"));
    connect(_islem, &QAction::triggered, this, &SeyahatListesiIslemi::main);
}


void SeyahatListesiIslemi::main()
{
     auto veri = Data::yellow().seyahat().tumunuBul([](std::shared_ptr<SeyahatBS>)
     {return true; });
     SeyahatListeFormu *form = new SeyahatListeFormu();

     form->setListe(veri);

     form->setAttribute(Qt::WA_DeleteOnClose);
     form->setWindowModality(Qt::ApplicationModal);

     form->show();
}

QAction *SeyahatListesiIslemi::islem()
{
    return _islem;
}
