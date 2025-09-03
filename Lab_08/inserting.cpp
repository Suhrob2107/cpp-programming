

#include <iostream>
using namespace std;


void deneme1()
{
    int a[15], value, i, pos;
	int size = 10;
	cout << "Enter array elements: ";
	for (i = 0; i < 10; i++)
	{
		cout << "a[ " << i << " ] = ";
		cin >> a[i];
	}
	cout << "Enter element to be insert : ";
	cin >> value;
	cout << "At which position: ";
	cin >> pos;
	for (i = 10; i > pos; i--)
	{
		a[i] = a[i - 1];
	}
	a[pos] = value;
	for (i = 0; i < size + 1; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
}
void deneme2()
{
    cout << "Burasi deneme sarayi" << endl;
}
