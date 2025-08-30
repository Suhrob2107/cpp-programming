
#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if(y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    cout << "\t\t\t***Program to calculate the G.C.D for two integers using recursion.***" << endl;
    cout << "Please enter two integer numbers: " << endl;
    int x , y;
    cin >> x >> y;
    cout << "The G.C.D of " <<" " << x << " " << "and" << " " << y << " " << " is " << gcd(x,y);
    return 0;
}
