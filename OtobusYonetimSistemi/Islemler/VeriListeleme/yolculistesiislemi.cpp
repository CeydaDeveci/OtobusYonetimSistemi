#include "yolculistesiislemi.h"
#include <Veri/data.h>
#include <Formlar/ListeFormlari/yolculisteformu.h>

YolcuListesiIslemi::YolcuListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem=new QAction();
    _islem->setText(tr("Yolcu Veri Listesi Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Yolcu.png"));
    connect(_islem, &QAction::triggered, this, &YolcuListesiIslemi::main);

}


void YolcuListesiIslemi::main()
{
    auto veri = Data::yellow().yolcu().tumunuBul([](std::shared_ptr<YolcuBS>)
    {return true; });

    YolcuListeFormu *form = new YolcuListeFormu();

    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}

QAction *YolcuListesiIslemi::islem()
{
    return _islem;
}
