#include <iostream>   //std,cout kullana bilmek icin
using namespace std;   //std::cout yerinde cout yazabilmek icin

class Kolon
{
    int * data; //Dinamik dizi tutacak pointer
    int boyut;
public:
    Kolon(int boyut = 1) : boyut(boyut)
    {
        data = new int[boyut];
        cout << boyut << " Elemanli bir dizi olusturuldu" << endl;
    }

    Kolon(const Kolon& k)
    {
        this -> boyut = k.boyut;
        data = new int[boyut];
        for(int i =0;i<boyut;i++)
            data[i]=k.data[i];
        cout << "Kopyalama kurucusu calsiti." << endl;
    }

    ~Kolon(){delete[] data;cout << "Yikici calisti. Dizi silindi" << endl;} //Destructor (Yıkıcı)
    const int* getData()const{return data;}

    void set(int indis,int value)
    {
        if(indis < boyut)
            data[indis] = value;
    }


    int getBoyut()
    {
        return boyut;
    }
    void setBoyut(int boyut)
    {
        this -> boyut = boyut;
    }
    void print()const
    {
        for(int i =0;i<boyut;i++)
            cout << data[i] << " ";
        cout << endl;
    }

    Kolon topla(const Kolon&k)const
    {
        if(boyut == k.boyut)
        {
            Kolon temp(boyut);
            for(int i = 0;i < boyut;i++)
            {
                temp.data[i] = data[i] + k.data[i];
            }
            return temp;
        }
    }

    Kolon carpma(const Kolon& k)const
    {
        if(boyut == k.boyut)
        {
            Kolon temp(boyut);
            for(int i=0;i<boyut;i++)
                temp.data[i] = data[i] * k.data[i];
            return temp;
        }
    }

    double ortHesapla()const
    {
        int ara = 0;
        for(int i = 0;i < boyut;i++)
            ara += data[i];
        return (double)ara/boyut;
    }


};

int main()
{
    Kolon k(3);
    k.set(0,5);
    k.set(1,3);
    k.set(2,10);
    k.print();

    Kolon k2(3);
    k2.set(0,10);
    k2.set(1,2);
    k2.set(2,3);
    k2.print();

    cout << "Toplami: " << endl << endl;
    (k.topla(k2)).print();
    cout << "Carpimi: " << endl << endl;
    (k.carpma(k2)).print();

    cout << "K nin ortalamasi " << k.ortHesapla() << endl;
    cout << "k2 nin ortalamasi " << k2.ortHesapla() << endl;
    cout << "k + k2 Ortalamasi" << (k.carpma(k2)).ortHesapla();

    return 0;
}
