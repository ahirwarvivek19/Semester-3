//3-WAP in C/C++ to check string 1 is a substring  of string 2 or not

#include <iostream>
using namespace std;

bool checkSubstring(string s1, string s2)
{
    int size1 = s1.length();
    int size2 = s2.length();
    int j = 0;
    for (int i = 0; i < size2-size1; i++)
    {
            for (j = 0; j < size1; j++)
            {
                if (s2[i + j] != s1[j])
                {
                    break;
                }
            }
            if (j == size2)
            {
                return i;
            }

    }
    return -1;
}

int main()
{
    string str1, str2;

    cout << "Enter string 1 to find in string 2" << endl;
    cin >> str1;
    cout << "Enter string 2" << endl;
    cin >> str2;
    int res = checkSubstring(str1, str2);
    if (res != -1)
        cout <<'\n' <<str1 << " is present in " << str2;
    else
        cout <<'\n' << str1 << " is not present in " << str2;

    return 0;
}
