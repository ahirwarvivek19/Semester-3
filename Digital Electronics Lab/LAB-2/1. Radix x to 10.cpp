//1. WAP (C/ C++) to convert a number from radix 'x' to radix '10'.

#include <iostream>
#include <cmath>
using namespace std;

//Function for converting char to int
int charToInt(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

//Function for converting number from base x to base 10
long long XToBase10(string str, int base)
{
    int i = 0, j = 0;
    long long num = 0;
    int size = str.size();
    for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = num + charToInt(str[i]) * pow(base, j);
        }
        else
        {
            num = num + charToInt(str[i]) * pow(base, j);
        }
    }
    return num;
}

int main()
{
    int x, i, j;
    string str;
    cout << "\nEnter radix 'x': ";
    cin >> x;
    cout << "Enter number in radix 'x' to convert in radix '10': ";
    cin >> str;
    cout << endl;
    cout << "Conversion of number " << str << " from (base '" << x << "') to base '10' is: " << XToBase10(str, x) << endl << endl;

    return 0;
}
