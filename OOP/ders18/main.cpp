#include <iostream>
using namespace std;
#include "Nokta.h"

int Nokta::i = 100;

int main()
{
    int x1,x2,y1,y2;
    cout << "x1 deger gir: ";
    cin >> x1;
    cout << "y1 deger gir: ";
    cin >> y1;
    cout << "x2 deger gir: ";
    cin >> x2;
    cout << "y2 deger gir: ";
    cin >> y2;
    Nokta n1(x1,x2);
    Nokta n2(y1,y2);
    cout << "x1 = " << x1 << "x2 = " << x2 <<"y1 = " << y1 <<"y2 = " << y2 << "kordinatlar arasindaki uzunluk => " <<  n1.uzaklikHesapla(n2);
    return 0;
}




















