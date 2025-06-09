#include <iostream>

using namespace std;

int main(){
    float temp;
    char unit;

    cout << "enter the temperature: ";
    cin >> temp;

    cout << "Enter the unit (C/F): ";
    cin >> unit;

    if (unit == 'C'){
        cout << "The temperature in Fahrenheit is " << (temp * 9 / 5) + 32 << "F" << endl;
    }
    else if(unit == 'F'){
        cout << "The temperature in Celsius is " << (temp - 32) * 5 / 9 << "C" << endl;
    }
    else{
        cout << "Invalid unit." << endl;
    }
    system("pause");
    return 0;
}
