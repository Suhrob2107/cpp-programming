#ifndef _KOLON_
#define _KOLON_
#include "Kolon.h"

Kolon::Kolon(int boyut) : boyut(boyut)
{
    data = new int[boyut];
    cout << boyut << " Elemanli bir dizi olusturuldu" << endl;
}

Kolon::Kolon(const Kolon& k)
{
    this -> boyut = k.boyut;
    data = new int[boyut];
    for(int i =0;i<boyut;i++)
        data[i]=k.data[i];
    cout << "Kopyalama kurucusu calsiti." << endl;
}

Kolon::~Kolon(){delete[] data;cout << "Yikici calisti. Dizi silindi" << endl;} //Destructor (Yıkıcı)

void Kolon::set(int indis,int value)
{
    if(indis < boyut)
        data[indis] = value;
}



int Kolon::getBoyut(){return boyut;};

void Kolon::setBoyut(int boyut){this->boyut = boyut;}

void Kolon::print()const{
    for(int i=0;i<boyut;i++)
        cout << data[i] << " ";
    cout << endl;
}

Kolon Kolon::topla(const Kolon&k)const{
    if(boyut == k.boyut)
    {
        Kolon temp(boyut);
        for(int i =0;i<boyut;i++)
            temp.data[i] = data[i] + k.data[i];
        return temp;
    }
}

Kolon Kolon::carpma(const Kolon&k)const{
    if(boyut == k.boyut)
    {
        Kolon temp(boyut);
        for(int i =0;i<boyut;i++)
            temp.data[i] = data[i] * k.data[i];
        return temp;
    }
}

double Kolon::ortHesapla()const{
    int ara = 0;
    for(int i=0;i<boyut;i++)
        ara+=data[i];
    return (double)ara/boyut;
}

Kolon Kolon::operator+(const Kolon& k)const
{
    if(boyut == k.boyut)
    {
         Kolon temp(boyut);
        for(int i=0;i<boyut;i++)
            temp.data[i] = data[i] + k.data[i];
        return temp;
    }
}

Kolon Kolon::operator+(const int x)const
{
    Kolon temp(boyut);
    for(int i=0;i<boyut;i++)
        temp.data[i] = data[i] + x;
    return temp;
}

#endif // _KOLON_
