#include <iostream>
using namespace std;

void sequentialSearch(int a[], int n, int key)
{
    bool r = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "\nKey found at index " << i << endl;
            r = true;
        }
    }
    if (r == false)
    {
        cout << "\nKey not found" << endl;
    }
}

int main()
{
    int n, i;
    cout << "Enter the size of array: ";
    cin >> n;
    int ar[n];
    cout << "Enter the elements of array" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int key;
    cout << "\nEnter the value to be searched : ";
    cin >> key;

    sequentialSearch(ar, n, key);

    return 0;
}

//TC
