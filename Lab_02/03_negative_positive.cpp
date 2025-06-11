#include <iostream>
using namespace std;

int main(){
    float number;

    cout << "Enter a number: ";
    cin >> number;

    if(number > 0 ){
        cout << "The number is positive " << endl;
    }
    else{
        cout << "The number is negative " << endl;
    }
    system("pause");
    return 0;
}
