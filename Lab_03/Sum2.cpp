//Lab assignment #4
//Program to display sum of series 1+3+5+7+... .

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the value n: ";
    cin >> n;
    for(int i = 1; i<= n; i=i+2)
        sum += i;
    cout << "Sum is : " << sum << endl;
    system("pause");
    return 0;
}
