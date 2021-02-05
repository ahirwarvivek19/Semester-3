//1. write a program in c++ to print the total surface area and volume of a cylinder by creating a class
// named "cylinder" with a function to print the area and volume.

#include <iostream>
using namespace std;

#define pie 3.141

class cylinder
{
private:
    double radius, height;


public:
    /*
    cylinder(double r, double h)
    {
        this->radius = r;
        this->height = h;
    }
    */

    void getdata()
    {

        cout << "Enter the radius and height of cylinder:" << endl;
        cin>>radius>>height;
    }
    void TSA();
    void volume();
};

void cylinder::TSA()
{
    // TSA = 2πr (h + r)
    double tsa = (2 * pie * radius * (radius + height));
    cout<<"Total surface area of cylinder = "<<tsa<<endl;
}

void cylinder::volume()
{
    // V = πr2h
    double vol = pie * radius * radius * height;
    cout<<"Volume of cylinder = "<<vol<<endl;
}

int main()
{


    cylinder c1;
    c1.getdata();
    c1.volume();
    c1.TSA();

    cout<<endl;

    cylinder c2;
    c2.getdata();
    c2.volume();
    c2.TSA();

    return 0;
}
