#include <iostream>
using namespace std;

int main()
{
    int a[10];
    cout << "Input an Array Elements." << endl;
    for(int i = 0;i < 10;i++)
    {
        cout << "array element [ " << i << "]";
        cin >> a[i];
    }
    cout << endl;
    double sum = 0;
    for(int i = 0;i < 10;i++)
    {
        sum += a[i];
    }
    double average;
    average = sum / 10;
    cout << "Average of array element: " << average << endl;
    system("pause");
    return 0;
}
