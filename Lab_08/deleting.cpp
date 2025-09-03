

#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int n = 10;
    cout << "Input numbers for into arrays." << endl;
    for(int i = 0;i < n;i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    int value;
    int position;
    cout << "Enter value which you want to delete: ";
    cin >> value;
    for(int i = 0;i < n;i++)
    {
        if(value == a[i])
            position = i;
    }
    for(int i = position;i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    for(int i = 0;i < n;i++)
    {
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    a[9] = 0;
    return 0;
}
