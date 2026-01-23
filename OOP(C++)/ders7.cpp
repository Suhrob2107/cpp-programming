#include <iostream>
using namespace std;

class Nokta{
    private: 
        int x;
    public:
        int y; //degisken

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
    Nokta n1;
   // n1.x = 5;
    n1.y = 7;
   // cout << n1.x << endl;
    cout << n1.y << endl;


    return 0;
}

