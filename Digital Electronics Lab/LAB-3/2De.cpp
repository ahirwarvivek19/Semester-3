#include <iostream>
using namespace std;
string binary(int, int, int);
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
    cout << result;
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
