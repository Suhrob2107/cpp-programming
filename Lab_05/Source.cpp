
#include <iostream>
#include <math.h>

using namespace std;


float area(float radiis){
 float area;
 area = (atan(1) * 4) * (pow(radiis,2));
 return area;
}
int main(){
    float radius;
    cout << "Please enter the radius of circle: ";
    cin >> radius;

    if(radius > 0){
        cout << area(radius) << endl;
    }
    else{
        cout << "Invalid Radius!" << endl;
    }
    system("pause");
    return 0;
}
