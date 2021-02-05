#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "A-Class" << endl;
    }
};

class B
{
public:
    void print()
    {
        cout << "B-Class" << endl;
    }
};

class C : public A, public B
{
public:
    void print()
    {
        cout << "Both class: A and B" << endl;
    }
};

int main()
{
    A objA;
    B objB;
    C objC;
    cout<<"Object A"<<endl;
    objA.print();
    cout << endl;
    cout<<"Object B"<<endl;
    objB.print();
    cout << endl;

    cout << endl;
    cout<<"Object C"<<endl;
    objC.print();
    objC.A::print();
    objC.B::print();

    return 0;
}
