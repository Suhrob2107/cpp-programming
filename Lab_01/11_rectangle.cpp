// C++ program to Calculate Area of Rectangle.

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\t\tC++ program to Calculate Area of Rectangle.";
    float a,b,Area;
    cout << "\t\tPlease enter one side of the Rectangle: ";
    cin >> a;
    cout << "Please enter second side of the Rectangle: ";
    cin >> b;
    if(a>0 && b > 0){
        Area = a * b;
        cout << "The are of the Rectangle: " << Area << ";" << endl;
    }
    else{
        cout << "The values cannot be lower then zero !" << endl;
    }
    system("pause");
    return 0;
}
