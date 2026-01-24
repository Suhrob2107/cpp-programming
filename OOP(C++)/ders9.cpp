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
    friend class A; //A sınıfının tüm fonksiyonları, B sınıfının private üyelerine erişebilir
};

int A::getX(){return x;}

void A::setX(int _x){x = _x;}

void Foo(A&a){a.x = 0;}


int B::getY(){return y;}

void B::setY(int _y){y = _y;}

void A::setY(B&y){y.y = 100;}



int main()
{
    A n;
    n.setX(4);
    cout << n.getX() << endl;
    Foo(n);
    cout << n.getX() << endl;

    B b;
    b.setY(50);
    cout << b.getY() << endl;
    n.setY(b);
    cout << b.getY() << endl;
    return 0;
}

//friend void Foo(A&) Sadece Foo, A’nın private alanlarına erişir
//friend class A   A sınıfının tüm fonksiyonları, B’nin private alanlarına erişir
//friend Tek yönlüdür,Kalıtım değildir




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
    friend ostream& operator << (ostream&,A&);
};


int A::getX(){return x;}

void A::setX(int _x){x = _x;}

ostream& operator << (ostream& o,A&a)
{
    o << "A sinifindaki x = " <<  a.x;
    return o;
}



int main()
{
    A n;
    n.setX(4);
    cout << n;
    return 0;
}

