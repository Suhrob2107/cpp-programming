
#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << "Input numbers of arrays: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << "Array element [" << i << " ] ";
        cin >> a[i];
    }
    cout << endl;
    cout << "Displaying arrays: " << endl;
    for(int i = 4; i < 9;i++)
    {
        cout << "a [" << i << "] = " << a[i] << endl;
    }
    system("pause");
    return 0;
}
