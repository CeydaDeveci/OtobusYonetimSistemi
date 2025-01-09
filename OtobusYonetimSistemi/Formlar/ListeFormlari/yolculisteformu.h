#ifndef YOLCULISTEFORMU_H
#define YOLCULISTEFORMU_H

#include <QWidget>
#include <Veri/tanimlar.h>

namespace Ui {
class YolcuListeFormu;
}

class YolcuListeFormu : public QWidget
{
    Q_OBJECT

public:
    explicit YolcuListeFormu(QWidget *parent = nullptr);
    ~YolcuListeFormu();

    const YolcuListesi &liste() const;
public slots:
    void setListe(const YolcuListesi &newListe);

private:
    Ui::YolcuListeFormu *ui;
    YolcuListesi _liste;
    void ekranGuncelle();
};

#endif // YOLCULISTEFORMU_H
