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


};

int main()
{
    Kolon k(5);
    Kolon k2 = k;
    k.print();
    k2.print();
    cout << k.getData() << endl;
    cout << k2.getData() << endl;

    return 0;
}
