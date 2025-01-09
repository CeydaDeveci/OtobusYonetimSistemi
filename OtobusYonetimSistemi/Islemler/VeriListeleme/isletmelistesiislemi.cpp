#include "isletmelistesiislemi.h"
#include <Veri/data.h>
#include <Formlar/ListeFormlari/isletmelisteformu.h>

IsletmeListesiIslemi::IsletmeListesiIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction();
    _islem->setText(tr("İşletme Veri Listesi"));
    _islem->setIcon(QIcon(":/Resimler/Isletme.png"));
    _islem->setShortcut(QKeySequence("F3"));
    connect(_islem, &QAction::triggered, this, &IsletmeListesiIslemi::main);
}

void IsletmeListesiIslemi::main()
{
    auto veri = Data::yellow().isletme().tumunuBul(
                [](std::shared_ptr<IsletmeBS>)
    {return true; });

    IsletmeListeFormu *form= new IsletmeListeFormu(Data::yellow().isletme());

    form->setListe(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}

QAction *IsletmeListesiIslemi::islem()
{
    return _islem;
}



