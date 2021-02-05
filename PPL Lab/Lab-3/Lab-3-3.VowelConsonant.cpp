//3.    Program to count vowels and consonants in a string using a pointer.

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string" << endl;
    fgets(str, 100, stdin);

    char *p;
    p = str;

    int vowels = 0, consonants = 0;
    while ((*p) != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' 
             || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        {
            vowels++;
        }
        else if (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z')
        {
            consonants++;
        }
        p++;
    }

    cout << "No. of vowels = " << vowels << endl;
    cout << "No. of consonants = " << consonants << endl;

    return 0;
}

