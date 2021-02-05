#include <iostream>
using namespace std;
string firstpart(string, int, int);
string secondpart(string, int, int);
string binary(int, int, int);
int power(int, int);
int lcm(int, int);
int main()
{
    string n1;
    int r1, r2;
    cout << "Enter the number-:";
    cin >> n1;
    cout << "Enter the radix of the number-:";
    cin >> r1;
    cout << "Enter the radix of the second number-:";
    cin >> r2;
    int l = lcm(r1, r2);
    string result1 = firstpart(n1, r1, l);
    // cout<<result1<<endl;
    string fin = secondpart(result1, l, r2);
    cout << fin;
}
int lcm(int r1, int r2)
{
    for (int i = 2;; i++)
    {
        if (r1 % i == 0 && r2 % i == 0)
            return i;
    }
}
string secondpart(string n1, int r1, int r2)
{
    ;
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
        if (c == i || j == 0)
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
    return result;
}
int power(int r1, int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
        r *= r1;
    return r;
}
string firstpart(string n1, int r1, int r2)
{
    int po = 0;
    int rad1 = r1;
    int rad2 = r2;
    while (rad1 != 1)
    {
        rad1 /= rad2;
        po++;
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
    string result = "";
    for (int i = point - 1; i >= 0; i--)
    {
        int num;
        char ch = n1.at(i);
        if (ch >= 48 && ch <= 57)
            num = ch - 48;
        else if (ch >= 65 && ch <= 90)
            num = ch - 55;
        else
        {
            cout << "You have entered the worng number ";
            return 0;
        }
        result = binary(num, r2, po) + result;
    }
    if (po != n1.length())
        result = result + ".";
    for (int i = point + 1; i < n1.length(); i++)
    {
        int num;
        char ch = n1.at(i);
        if (ch >= 48 && ch <= 57)
            num = ch - 48;
        else if (ch >= 65 && ch <= 90)
            num = ch - 55;
        else
        {
            cout << ch << endl;
            cout << "You have entered the worng number ";
            return 0;
        }
        result = result + binary(num, r2, po);
    }
    return result;
}
string binary(int num, int r2, int po)
{
    string store = "";
    while (num != 0)
    {
        int a = num % r2;
        num /= r2;
        if (a <= 9)
            store = (char)(a + 48) + store;
        else
            store = (char)(a + 55) + store;
    }
    if (store.length() == po)
        return store;
    else
    {
        int len = store.length();
        for (int i = 0; i < po - len; i++)
            store = "0" + store;
        return store;
    }
}