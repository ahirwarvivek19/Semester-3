// 1. write a program in c/c++ to calculate volume of cuboid,sphere and cone using function overloading.

#include <iostream>
using namespace std;
#define pi 3.141

// Volume of  Sphere
double Volume(double r)
{
    return ((4 / 3) * pi * r * r * r);
}

//Volume of Cone
double Volume(double r, double h)
{
    return (1 * pi * r * r * h) / 3;
}

//Volume of Cuboid
double Volume(double l, double b, double h)
{
    return l * b * h;
}

int main()
{
    cout << "Welcome to volume calculator" << endl
         << endl;
    int choice;

    while (true)
    {

        cout << "Enter Choice" << endl;
        cout << "1. Volume of Cuboid" << endl;
        cout << "2. Volume of  Sphere" << endl;
        cout << "3. Volume of Cone" << endl;
        cout << "0. Exit" << endl;
        cout << "Your Choice: ";
        cin >> choice;
        double l, b, h, r;
        switch (choice)
        {
        case 1:

            cout << "Enter l,b,h of cuboid: " << endl;
            cin >> l >> b >> h;
            cout << "Volume of cuboid = " << Volume(l, b, h);
            break;
        case 2:

            cout << "Enter radius of Sphere: " << endl;
            cin >> r;
            cout << "Volume of sphere = " << Volume(r) << endl;
            break;
        case 3:

            cout << "Enter radius r and h height of Cone: " << endl;
            cin >> r >> h;
            cout << "Volume of sphere = " << Volume(r, h) << endl;
            break;
        case 0:
            exit(0);
        default:
            cout << "Enter Valid Choice" << endl
                 << endl;
        }
        cout << endl
             << endl;
    }
    //    cout<<Volume(4,4,4)<<endl;
    //    cout<<Volume(4)<<endl;
    //    cout<<Volume(4,3);

    return 0;
}
