//4.    Program to read array elements and print with addresses.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int ar[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int *ptr;
    ptr = ar;

    cout << "Values and addresses of elements are.." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Value = " << *ptr << "\t Address = " << ptr << endl;
        ptr++;
    }

    return 0;
}
