#include <iostream>
using namespace std;
#include "Nokta.h"

int Nokta::i = 100;

int main()
{
    Nokta n1(2,5);
    Nokta n2(15,30);
    n1.ekranaYaz();
    /*
    Nokta n3 = n1.topla(n2);
    n3.ekranaYaz();*/
    (n1.topla(n2)).ekranaYaz();
    return 0;
}




















