#include <iostream>
using namespace std;
#include "Nokta.h"

int Nokta::i = 100;

int main()
{
    Nokta n1(1,10,10);
    Nokta n2(n1);
    {
        cout << n1.getI() << endl;
        cout << n2.getI() << endl;
        n2.setI(500);
        Nokta n3;
        cout << n1.getI() << endl;
        cout << n2.getI() << endl;
    }
    cout << n1.getI() << endl;
    Nokta n4;
    cout << n2.getI() << endl;
    return 0;
}




















