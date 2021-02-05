// write a program in c/c++ to use static, local, global variable in
// different functions and call that functions twice, then analyse the results and print final value of each variable.
#include<iostream>
using namespace std;

int global_z = 30;

//For static variable
void func1Static()
{
    static int x=10;
    cout<<x<<" ";
    x++;
}

//for local variable
void func2Local()
{
    int y=20;
    cout<<y<<" ";
    
}

//for global variable
void func3Global()
{
    cout<<global_z<<" ";
    global_z++;
    
}

int main()
{
    cout<<"Static Variable"<<endl;
    func1Static();
    func1Static();

    cout<<"\nLocal Variable"<<endl;
    func2Local();
    func2Local();

    cout<<"\nglobal Variable"<<endl;
    
    func3Global();
    func3Global();
    
    return 0;
}