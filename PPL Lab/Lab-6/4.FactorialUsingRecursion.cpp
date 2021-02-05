// 4. Write a program in c/c++ to calculate the factorial of n using recursion.

#include <iostream>
using namespace std;

int fact(int n)
{
    
    if (n == 0)
    {
        return 1;
    }
    else
        return n * fact(n-1);
}

int main()
{
    int n;
    cout << "Enter a number to find factorial: " << endl;
    cin >> n;
    int res= fact(n);
    cout << "Factorial of " << n << " is " << res;

    return 0;
}
