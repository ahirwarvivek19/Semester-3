//WAP to convert radix 10 number without radix point to any random radix r (and  check it for r = 2, 8, 16 and 5).

#include<iostream>
using namespace std;

void decimalToRadix(int number,int base)
{
    
    int ar[100],n=0;
    if (number==0)
    {
        cout<<'0';
    }
    else
    {
        /* code */
    
    

    while(number!=0)
    {
        ar[n]=number%base;

        number=number/base;
        n++;
    }

    for (int i = n-1; i >=0; i--)
    {
        if (ar[n]<=9)
        {
            cout<<ar[n];
        }
        else
        {
            cout<<(char)(64+ar[n]-9);
        }
        
    }
    }
}


int main()
{
    cout<<"Vivek Kumar Ahirwar - 191112419"<<endl;

    long long int n;int r;
    cout<<"Enter a decimal (radix 10) number: ";
    cin>>n;
    cout<<"Enter the radix r: ";
    cin>>r;
    cout<<endl;
    decimalToRadix(n,r);
    cout<<endl;
    
    return 0;
}