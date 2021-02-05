// write a program in c/c++ to define global variable which is accessed by main() and two other functions and then print the values of global variable in each function call.

#include<iostream>
using namespace std;

int g=50;

void func1()
{
    
    cout<<g<<" ";

}

void func2()
{
    
    cout<<g<<" ";
}

int main()
{
    cout<<"Value of global inside main function"<<endl;
    cout<<g<<endl;
    cout<<"Values inside functions"<<endl;
    func1();
    func2();

    return 0;
}