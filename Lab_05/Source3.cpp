// Program to sum the series up to n

#include <iostream>
#include <math.h>
using namespace std;

double qwerty(double n, double sum, double fact){
    for(int i = 1; i <= n; i++){
        fact = fact * i;
        sum += (pow(i,i) / (fact));
    }
    return sum;
}
int main(){
    double n;
    double sum = 0;
    double fact = 1;
    cout << "Please enter the number: ";
    cin >> n;
    if(n > 0){
        cout << "Sum is: " << qwerty(n,sum,fact) << endl;
    }
    else{
        cout << "Invalid input!" << endl;
    }
    system("pause");
    return 0;
}
