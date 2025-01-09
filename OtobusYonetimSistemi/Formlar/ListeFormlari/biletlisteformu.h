#ifndef BILETLISTEFORMU_H
#define BILETLISTEFORMU_H

#include <QWidget>
#include <Veri/tanimlar.h>

namespace Ui {
class BiletListeFormu;
}

class BiletListeFormu : public QWidget
{
    Q_OBJECT

public:
    explicit BiletListeFormu(QWidget *parent = nullptr);
    ~BiletListeFormu();

    const BiletListesi &liste() const;
public slots:

    void setListe(const BiletListesi &newListe);

private:
    Ui::BiletListeFormu *ui;
    BiletListesi _liste;
    void ekranGuncelle();
};

#endif // BILETLISTEFORMU_H
