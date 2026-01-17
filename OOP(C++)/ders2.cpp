#include <iostream>
using namespace std;

class Nokta{
    public:
    int x,y; //degisken

    void degerAta(int _x,int _y) //fonksiyon
    {
        x = _x;
        y = _y;
    }
    void ekranaYaz()
    {
        cout << x << "," << y << endl;
    }

    bool baslangictami()
    {
        if(x == 0 && y == 0)
        {
            return true;
        }
        else
            return false;
    }
};



int main()
{
    Nokta n;
    Nokta n2;

    n.degerAta(0,0);
    n.ekranaYaz();

    n2.degerAta(2,5);
    n2.ekranaYaz();

    if(n.baslangictami())
        cout << "N baslangicta " << endl;

    if(n2.baslangictami())
        cout << "N2 baslangicta" << endl;

    return 0;
}

