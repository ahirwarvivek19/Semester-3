//2. Write a program in C to print a string in reverse using a pointer.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[100];
    cout << "Enter the string" << endl;
    cin >> ch;
    int len = 0, i = 0;
    while (ch[i] != '\0')
    {

        len++;
        i++;
    }
    char *ptr = ch;
    cout << endl;
    cout << "Reversed String : " << endl;
    for (int i = len - 1; i >= 0; i--)
    {
        cout << *(ptr + i);
    }
    cout << endl;

    return 0;
}
