//Write a program in C to sort an array using Pointer.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *ptr = new int[n];

    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                int temp;
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
