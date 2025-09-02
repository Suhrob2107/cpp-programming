#include <iostream>
using namespace std;


void merging(int arr1[], int arr2[],int arr3[])
{
    int i = 0, j = 0 , k = 0;
    for(i = 0;i < 5 && j < 5;)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < 5)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int arr1[5] , arr2[5];
    int arr3[10];
    int i;
    cout << "Input the elements for the first Array: ";
    for(i = 0;i < 5;i++)
    {
        cin >> arr1[i];
    }
    cout << "Input the elements for the second Array: ";
	for (i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}
	merging(arr1, arr2, arr3); // calling function merging
	cout << "Sorted Elements: ";
	for (i = 0; i < 10; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	return 0;
}


















