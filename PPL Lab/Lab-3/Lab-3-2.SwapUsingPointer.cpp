//2.    Program to swap two numbers using pointers.

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of y: ";
    cin >> y;

    cout << endl;

    swap(&x, &y);

    cout << "After swapping........." << endl;
    cout << "Value of x = " << x << endl;
    cout << "Value of y = " << y << endl;

    return 0;
}
