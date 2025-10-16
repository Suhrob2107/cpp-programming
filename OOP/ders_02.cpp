#include <iostream>
using namespace std;
class B;
class A
{
private:
    int x;
    public:
        int getX();
        void setX(int);
        friend void Foo(A&);
        void setY(B&);
};

class B
{
    private:
    int y;
    public:
        int getY();
        void setY(int);
        friend class A;
};




void A::setX(int _x){x = _x;}

int A::getX(){return x;}

void Foo(A&a){ a.x = 0;}



void B::setY(int _y){y = _y;}

int B::getY(){return y;}





int main()
{
    A n;
    n.setX(5);
    cout << "A turunden gelen deger = " << n.getX() << endl;

    Foo(n);
    cout << "Foo turunden gelen deger = " << n.getX() << endl;

    B b;
    b.setY(50);
    cout << "B turunden gelen deger = " << b.getY() << endl;

    system("pause");
    return 0;
}
