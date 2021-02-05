#include <iostream>
using namespace std;

class factorial
{
public:
    long long int fact = 1;

    factorial()
    {

        cout << "Factorial of 0 is " << fact;
    }

    factorial(int n)
    {

        for (int i = n; i >= 1; i--)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " is " << fact;
    }
};

int main()
{
    int n;

    cout << "Factorial by not passing any argument: " << endl;
    factorial f1;
    cout << endl
         << endl;

    cout << "Factorial by passing n: " << endl;
    cout << "Enter n" << endl;
    cin >> n;
    factorial f2(n);

    return 0;
}