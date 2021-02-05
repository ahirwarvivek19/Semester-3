//1.    Program to create, initialize, assign, and access a pointer variable.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value of a = " << *p << endl;
    cout << "Address of a = " << p << endl;
    cout << endl;
    cout<< "Address of p = " << &p << endl;
    cout << "Size of pointer p = " << sizeof(p);

    return 0;
}
