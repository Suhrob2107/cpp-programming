#include <iostream>

using namespace std;

int main(){
    cout << "\t\tC++ program to Calculate Area of Square." << endl;
    float a,Area;
    cout << "Please enter side of square: ";
    cin >> a;
    if (a > 0){
        Area = a * a;
        cout << "The area of the Square : " << Area << ";" << endl;
    }
    else{
        cout << "You can not use negative number!" << endl;
    }
    system("pause");
    return 0;
}
