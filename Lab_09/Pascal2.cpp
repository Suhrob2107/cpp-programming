#include <iostream>
using namespace std;

void main()
{
    cout << "\t\t\t Pascal triangle \n";
    int row = 0, col = 0;
    int a[7][7] = {};
    a[0][0] = 1;
    for(row = 0;row < 7;row ++)
    {
        for(col = 0;col <=row;col++)
        {
            if(col == 0 || row == col)
            {
                a[row][col] = 1;
                cout << " " << a[row][col];
            }
            else
            {
                a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
                cout << " " << a[row][col];
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}

