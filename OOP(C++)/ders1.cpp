#include <iostream>
using namespace std;

class Nokta{
    public:
    int x,y;
};



int main()
{
    Nokta n;
    n.x = 4;
    n.y = 8;

    cout << n.x << "," << n.y << endl;

    return 0;
}
