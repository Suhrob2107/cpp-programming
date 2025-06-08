#include <iostream>

using namespace std;

int main(){
    cout << "\t\t C++ Program to calculate are and Circumference of Circle . \n";
    float R,Area,Circumference;
    cout << "Please enter the radius Circle: ";
    cin >> R;
    if(R > 0){
        Area = 3.14 * R * R;
        Circumference = 2 * 3.14 * R;
        cout << "Area of Circle is " << Area << ";" << endl;
        cout << "Circumference the circle is " << Circumference << ";" << endl;
    }
    else{
        cout << "Negative number cannot be applied !!!" << endl;
    }
    system("pause");
    return 0;
}
