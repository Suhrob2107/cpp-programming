//C++ libriry which is calculating "pow" and PI=3.14

#include <iostream>
using namespace std;


double converting(double hours, double minutes, double seconds){
    return (hours * 60) + (minutes) + (seconds / 60);
}
int main(){
    double hourse,minutes,seconds;
    cout << "Hours: ";
    cin >> hourse;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;
    if(hourse >= 0 && minutes>= 0 && seconds >= 0){
        cout << "The time in minutes is: " << converting(hourse,minutes,seconds) << endl;
    }
    else{
        cout << "Invalid Inputs" << endl;
    }
    return 0;
}
