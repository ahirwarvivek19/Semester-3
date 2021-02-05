
//2. write a program in c/c++ to compute the area of circle,Use a default value of pi is 3.141 in case pi is omitted in the function call.

#include <iostream>
using namespace std;

double area_Circle(double r, double pi = 3.141);

int main()
{
    double r;
    cout << "Welcome to circle area calculator" << endl
         << endl;

    cout << "Enter the radius of circle: " << endl;
    cin >> r;
    //not Passing value of PI
    cout << "Area of circle = " << area_Circle(r) << endl;

    //Passing value of PI
    cout << "Area of circle = " << area_Circle(r, 3.14) << endl;

    return 0;
}

double area_Circle(double r, double pi)
{
    return pi * r * r;
}