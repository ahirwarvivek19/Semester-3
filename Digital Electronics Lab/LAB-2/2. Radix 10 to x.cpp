//2. WAP (C/ C++) to convert a number from radix �10� to radix �x�.

#include <iostream>
#include <cmath>
using namespace std;

//Function for converting int to char
char intTochar(int i)
{
    if (i <= 9)
        return (char)(i + '0');
    else
        return (char)(i - 10 + 'A');
}

//Function for converting number from base 10 to base x
string decimalToBaseX(long long num, int base)
{
    string str;
    if (num == 0)
    {
        str = '0';
        return str;
    }

    while (num != 0)
    {
        int rem = num % base;
        str = intTochar(rem) + str;
        num = num / base;
    }
}

int main()
{
    int x, i, j;
    long long num;
    cout << "\nEnter number in radix '10': ";
    cin >> num;
    cout << "Enter radix 'x' which number is to be converted: ";
    cin >> x;
    cout << endl;
    cout << "Conversion of " << num << " from (base 10) to base '" << x << "' is: " << decimalToBaseX(num, x) << endl<<endl;

    return 0;
}
