//3. WAP (C/ C++) to convert a number from radix ‘x’ to radix ‘y’ where x ≠ y ≠ 10.

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

//Function for converting int to char
char intTochar(int i)
{
    if (i <= 9)
        return (char)(i + '0');
    else
        return (char)(i - 10 + 'A');
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
    int radix_X, radix_Y;
    string strX;
    cout << "\nEnter the number that you would like to convert: ";
    cin >> strX;
    cout << "Enter the base 'x' of the entered number: ";
    cin >> radix_X;
    cout << "Enter the base 'y' in which you want number to be converted: ";
    cin >> radix_Y;
    cout << endl;
    string strY;

    long long base10 = XToBase10(strX, radix_X);

    strY = decimalToBaseX(base10, radix_Y);

    cout << strX << " from base '" << radix_X << "' to base '" << radix_Y << "' is : " << strY << endl
         << endl;

    return 0;
}
