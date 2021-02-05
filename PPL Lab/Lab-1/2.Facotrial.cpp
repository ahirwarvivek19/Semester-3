//1. Program to find factorial of a number

#include<iostream>
using namespace std;

long fact(int n)
{
    long  fact=1;
    
    if(n==0)
    {    
        return 1;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact = fact*i;
        }
        return fact;
    }
}


int main()
{
    int n;
    cout<<"Enter a nummber to find factorial: ";
    cin>>n;
    if(n>=0)
    {
        cout<<"Factorial of "<<n<<" is "<<fact(n);
    }
    else
    {
        cout<<"Factorial of "<<n<<" do not exist";
    }
    
    return 0;
}