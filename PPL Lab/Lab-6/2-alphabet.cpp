//2- WAP in C/C++ to increment the alphabets of a string by one alphabet using call by reference.

#include <iostream>
using namespace std;


void incrementAlphabet(string &s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'z')
        {
            s[i] = 97;
        }
        else if (s[i] == 'Z')
        {
            s[i] = 65;
        }
        else
        {
            s[i] = static_cast<char>(s[i] + 1);
        }

        i++;
    }
}

int main()
{
    string str;
    cout << "Enter a string: " << endl;
    cin >> str;
    cout << "\nIncremented Alpbhabet String" << endl;
    incrementAlphabet(str);
    cout << str << '\n';

    return 0;
}
