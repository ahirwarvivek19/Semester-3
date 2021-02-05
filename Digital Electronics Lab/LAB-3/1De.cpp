#include <iostream>
using namespace std;
int power(int, int);
int main()
{
    string n1;
    int r1, r2;
    cout << "Enter the first number-:";
    cin >> n1;
    cout << "Enter the radix of the first number-:";
    cin >> r1;
    cout << "Enter the radix of the second number-:";
    cin >> r2;
    int i = 0;
    int rad1 = r1, rad2 = r2;
    string result = "";
    while (rad2 != 1)
    {
        rad2 /= rad1;
        i++;
    }
    int point = n1.length();
    for (int i = 0; i < n1.length(); i++)
    {
        if (n1.at(i) == '.')
        {
            point = i;
            break;
        }
    }
    int c = 0;
    int sum = 0;
    for (int j = point - 1; j >= 0; j--)
    {
        int num = n1.at(j) - 48;
        num = num * power(r1, c);
        sum = sum + num;
        c++;
        if (c == i || j == 0)20
        {
            c = 0;
            if (sum <= 9)
                result = to_string(sum) + result;
            else
                result = (char)(55 + sum) + result;
            sum = 0;
        }
    }
    c = 0;
    sum = 0;
    result = result + ".";
    for (int j = point + 1; j < n1.length(); j++)
    {
        int num = n1.at(j) - 48;
        num = num * power(r1, i - c - 1);
        sum = sum + num;
        c++;
        if (c == i || j == n1.length() - 1)
        {
            c = 0;
            if (sum <= 9)
                result = result + to_string(sum);
            else
                result = result + (char)(55 + sum);
            sum = 0;
        }
    }
    cout << result;
}
int power(int r1, int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
        r *= r1;
    return r;
}
