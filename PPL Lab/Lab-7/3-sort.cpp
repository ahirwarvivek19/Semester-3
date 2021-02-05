
// 3. write a program in c/c++ to sort the alphabets of given string using call by reference

#include <iostream>
using namespace std;

void sort_String(string &s)
{
    int alpha[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        alpha[s[i] - 'a']++;
    }

    int k = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > 0)
        {
            for (int j = 0; j < alpha[i]; j++)
            {
                s[k++] = (char)('a' + i);
            }
        }
    }
}

int main()
{

    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    cout << endl;
    cout << "String after sorting" << endl;
    sort_String(str);
    cout << str;
    return 0;
}
