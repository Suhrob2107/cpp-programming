#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

void first(){
    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
    cout << "\t\t\t\t****Area of Geometrical figure. ***\n";
    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
    cout << "[1] Circle" << endl;
    cout << "[2] Rectangle" << endl;
    cout << "[3] Triangle" << endl;
    cout << "[4] Square" << endl;
    cout << "[5] Exit to main menu" << endl;
    cout << endl;
}
void second(){
    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
    cout << "\t\t\t\t*** Circumference of Geometrical figures. ***\n";
    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
    cout << "[1] Circle" << endl;
    cout << "[2] Rectangle" << endl;
    cout << "[3] Triangle" << endl;
    cout << "[4] Square" << endl;
    cout << "[5] Exit to main menu" << endl;
    cout << endl;
}

void third(){
    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
    cout << "\t\t\t\t*** Find the Largest number among 3 numbers. ***\n";
    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
}
double area(double radius){
    double area1;
    double input_radius;
    area1 = 3.141592653589793238463 * pow(radius,2);
    cout << "The area of Circle: " << area1 << endl;
    cout << endl;
    return area1;
}

double area(double sideA,double sideB){
    double area2;
    area2 = sideA * sideB;
    cout << "The area of Rectangle:" << area2 << endl;
    cout << endl;
    return area2;
}

double area(double sidetriangleA,double sidetriangleB,double sidetriangleC){
    double area3,S;
    S = (sidetriangleA + sidetriangleB + sidetriangleC) / 2;
    area3 = sqrt(S * (S - sidetriangleA) * (S - sidetriangleB) * (S - sidetriangleC));
    cout << "The area of triangle: " << area3 << endl;
    cout << endl;
    return area3;
}
float area(float sidesquare){
    float area4;
    area4 = pow(sidesquare,2);
    cout << "The area of square: " << area4 << endl;
    cout << endl;
    return area4;
}
double circumference(double sideA, double sideB){
    double circumference2;
    circumference2 = 2 * (sideA + sideB);
    cout << "The circumference of Rectangle:" << circumference2 << endl;
    cout << endl;
    return circumference2;
}
double circumference(double sidetriangleA,double sidetriangleB,double sidetriangleC){
    double circumference3;
    circumference3 = sidetriangleA + sidetriangleB + sidetriangleC;
    cout << "The circumference of triangle: " << circumference3 << endl;
    cout << endl;
    return circumference3;
}
float circumference(float sidesquare){
    float circumference4;
    circumference4 = 4 * sidesquare;
    cout << "The circumference of square: " << circumference4 << endl;
    cout << endl;
    return circumference4;
}
int findlargest(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3){
        cout << "Largest number: " << n1 << endl;
    }
    if(n2 >= n1 && n2 >= n3){
        cout << "Largest number: " << n2 << endl;
    }
    if(n3 >= n1 && n3 >= n2){
        cout << "Largest number: " << n3 << endl;
    }
    return n1,n2,n3;
}
double findlargest(double n1,double n2,double n3){
    if(n1 >= n2 && n1 >= n3){
        cout << "Largest number: " << n1 << endl;
    }
    if(n2 >= n1 && n2 >= n3){
        cout << "Largest number: " << n2 << endl;
    }
    if(n3 >= n1 && n3 >= n2){
        cout << "Largest number: " << n3 << endl;
    }
    else if(n1 == n2 == n3){
        cout << "Largest number: " << n3 << endl;
    }
    return n1,n2,n3;
}
template <class T>
T Large(T n1, T n2, T n3)
{
	if (n1 >= n2 && n1 >= n3)
	{
		cout << "Largest number: " << n1 << endl;
	}
	if (n2 >= n1 && n2 >= n3)
	{
		cout << "Largest number: " << n2 << endl;
	}
	if (n3 >= n1 && n3 >= n2)
	{
		cout << "Largest number: " << n3 << endl;
	}
	else if (n1 == n2 == n3)
		cout << "Largest number : " << n3 << endl;

	return n1, n2, n3;
}

int main(){
    system("color 3E");
    int numberforoperation = 0;
    double radius1;
    double sideA, sideB;
    double sidetriangleA,sidetriangleB,sidetriangleC;
    float sidesquare;
    double n1,n2,n3;

    for(int l = 0; l < 120; l++){
        cout << "=";
    }
    cout << endl;
    cout << "\t\t\t\t\t Hello! Welcome to the main menu. \n";
    cout << "\t\t Warning!!! Enter only numbers!!! And the 'y/n' when you will be asked! \n";
    for(int l = 0;l < 120;l++){
        cout << "=";
    }
    cout << endl;
    cout << "\t[1] Area of Geometrical Figures.\n";
	cout << "\t[2] Circumference of geometrical figures.\n";
	cout << "\t[3] Find the largest number.\n";
	cout << "\t[4] finding the largest number with function template.\n";
	cout << "\t[5] EXIT\n";
	cout << endl;
	b:
	    cout << " Please enter the number of operation you would like to execute: ";
	    cin >> numberforoperation;
	    if(numberforoperation > 0 && numberforoperation < 6){
            system("cls")
            switch(numberforoperation){

            }
	    }
}






























