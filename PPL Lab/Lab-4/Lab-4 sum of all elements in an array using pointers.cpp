//3. Write a program in C to compute the sum of all elements in an array using pointers.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    int *ptr;
    ptr = a;
    cout << "Enter the elements of array" << endl;

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + (*ptr);
        ptr++;
    }

    cout << "Sum of elements = " << sum;
    return 0;
}
