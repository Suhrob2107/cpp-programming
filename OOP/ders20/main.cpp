#include <iostream>
using namespace std;
#include "Nokta.h"

class cizgi
{
private:
    Nokta baslangic;
    Nokta bitis;
public:
    cizgi(Nokta baslangic,Nokta bitis) : baslangic(baslangic), bitis(bitis)
    {

    }
    double uzunluk()const
    {
        return baslangic.uzaklikHesapla(bitis);
    }
    void yazdir()const
    {
        baslangic.ekranaYaz();
        bitis.ekranaYaz();
        cout << "Cizginin uzunlugu: " << uzunluk() << endl;
    }
};

int main()
{
    cizgi c(Nokta(0,0),Nokta(5,5));
    c.yazdir();
    return 0;
}




















