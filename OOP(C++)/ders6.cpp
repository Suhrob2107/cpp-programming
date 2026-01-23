#include <iostream>
using namespace std;

class Nokta{
    public:
    int x,y; //degisken

    void degerAta(int,int);  //sadece int duruyorsa protoip oluyor
    void ekranaYaz();
    bool baslangictami();

};
void Nokta::degerAta(int _x,int _y)
{
    x =_x;
    y = _y;
}

void Nokta::ekranaYaz() // :: skop operatorudur
{
    cout << x << "," << y << endl;
}

bool Nokta::baslangictami()
{
    return x ==0 && y == 0;
}


int main()
{
    Nokta n;
    Nokta n2;

    Nokta *n3; //pointer = Bellekteki bir adresi tutan değişken, Normal değişken → değer tutar
    n3 = &n2; //n2 nesnesinin bellekteki adresi n3 atamak

    Nokta *n4;
    n4 = new Nokta();

    Nokta array[10]; // normal dizi
    Nokta* pArray; // pointer cinsinde dizi
    pArray = new Nokta[10];

    for(int i=0;i<10;i++)
    {
        array[i].degerAta(i,i+2);
        pArray[i].degerAta(i+5, i+10);
    }
    for(int i=0;i<10;i++)
    {
        array[i].ekranaYaz();
        (pArray + i)->degerAta(i+5, i+10);
    }

    n.degerAta(1,0);
    n.ekranaYaz();

    n2.degerAta(2,5);
    n2.ekranaYaz();

    if(n.baslangictami())
        cout << "N baslangicta " << endl;

    if(n2.baslangictami())
        cout << "N2 baslangicta" << endl;

    cout << "n3 pointer ile yazilan degerler" << endl;
    n3->ekranaYaz();

    n4->degerAta(100,200);
    n4->ekranaYaz();



    return 0;
}

