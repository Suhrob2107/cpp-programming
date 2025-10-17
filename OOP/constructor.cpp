#include <iostream>
using namespace std;


class Nokta
{
private:
    int x;
    int y;
public:
//    Nokta();
    Nokta(int,int);
    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void ekranaYaz();
    bool baslangictami();
};

//Nokta::Nokta()  // --> constructor metodu set etmeden de calisir
//{
//    x = 2;
//    y = 8;
//}

Nokta::Nokta(int x = 18,int y = 7) // eger mainde Nokta n2(9); 9 yanina parametre vermezsek buradaki y degeri gelir
{
    this->x = x;
    this->y = y;
}


int Nokta::getX()
{
    return x;
}
int Nokta::getY()
{
    return y;
}

//void Nokta::setX(int _x)  //asagdaki ile aynidir
//{
//    x = _x;
//}

void Nokta::setX(int x)
{
    this->x = x;
}
void Nokta::setY(int _y)
{
    if(_y > 5)
        y = _y;
    else
        y = 2;
}

void Nokta::ekranaYaz()
{
    cout << x << "," << y << endl;
}
bool Nokta::baslangictami()
{
    return x == 0 && y == 0;
}

int main()
{
    Nokta n1;
    Nokta n2(4);
    // n1.setX(10);
    cout << n1.getX() << " " << n1.getY() << endl;
    cout << n2.getX() << " " << n2.getY() << endl;
    system("pause");
    return 0;
}

























