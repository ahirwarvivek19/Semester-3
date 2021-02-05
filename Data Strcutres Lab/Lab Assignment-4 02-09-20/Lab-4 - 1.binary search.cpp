//Write a program in your preferred language for implementing a binary search.

#include <iostream>
using namespace std;

//Using iteration
int binarySearch(int arr[], int l, int r, int key)
{

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            r = mid - 1;
        }
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
    }
    return -1;
}

//Using Recursion
int RbinarySearch(int arr[], int l, int r, int key)
{
    int mid = (l + r) / 2;

    if (l <= r)
    {

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return RbinarySearch(arr, l, mid - 1, key);

        if (arr[mid] < key)
            return RbinarySearch(arr, mid + 1, r, key);
    }
    return -1;
}

int main()
{
    int n;
    int key;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of sorted array" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    cout << "Enter element to search" << endl;
    cin >> key;
    int l = 0;
    int r = n - 1;

    //  int index = binarySearch(a,l,r,key);

    int Rindex = RbinarySearch(a, l, r, key);
    if (Rindex == -1)
    {

        cout << "Element not found";
    }
    else
    {

        cout << "Element " << key << " found at index " << Rindex << endl;
    }

    return 0;
}
