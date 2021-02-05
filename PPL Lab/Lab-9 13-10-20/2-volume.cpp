// 2. write a program in c++ to print the volume of cones and cuboid by creating
//  a class named "volume" Heights, radius and sides are passed as parameter to its constructor.


#include<iostream>
using namespace std;
#define pie 3.141

class volume
{
public:
    //Volume of cuboid
    volume(double l,double b,double h)
    {
        //v = l*b*h
        cout<<"Volume of cuboid = "<<l*b*h<<endl;
    }

    //Volume of cone
    volume(double r,double h)
    {
        double v = (pie*r*r*h)/3;
        cout<<"Volume of cone = "<<v<<endl;
    }


};

int main()
{
    double l,b,h;
    double rad,hei;
    cout<<"Enter the length, breadth and height of cuboid (l,b,h)"<<endl;
    cin>>l>>b>>h;

    cout<<"Enter the radius and height of the cone (r,h)"<<endl;
    cin>>rad>>hei;

    volume(l,b,h);
    cout<<endl;
    volume(rad,hei);


    return 0;
}
