#include <iostream>
#include "Kolon.h"
#include <time.h>

int main()
{
    srand(time(NULL));
    Kolon k(4);
    Kolon k2(4);
    for(int i =0;i<4;i++)
    {
        k.set(i,rand() % 50);
        k2.set(i,rand() % 50);
    }
    k.print();
    cout << endl;
    k2.print();
    cout << endl;
    (k + k2).print();

    cout << endl << endl;
    (k + 10).print();

    return 0;
}
