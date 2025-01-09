#include "biletgirisislemi.h"
#include <Veri/data.h>
#include <Formlar/biletformu.h>

BiletGirisIslemi::BiletGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction;
    _islem->setText(tr("Bilet Veri Giriş Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Bilet.png"));
    connect(_islem, &QAction::triggered, this, &BiletGirisIslemi::main);
}


void BiletGirisIslemi::main()
{
    auto veri = Data::yellow().bilet().yeniNesne();
    BiletFormu *form= new BiletFormu();
    connect(form, &BiletFormu::veriKaydet,this,&BiletGirisIslemi::depoEkle);
    form->setVeri(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}
void BiletGirisIslemi::depoEkle() {
    BiletFormu *frmx =
            dynamic_cast<BiletFormu *>(sender()) ;
    auto veri=frmx->veri();
    Data::yellow().bilet().nesneEkle(veri);
    frmx->close();
}

QAction *BiletGirisIslemi::islem()
{
    return _islem;
}
