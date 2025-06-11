#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if(a % 2 == 0){
        cout << "Your number is even " << endl;
    }
    else{
        cout << "Your number is Odd " << endl;
    }
    system("pause");
    return 0;
}
