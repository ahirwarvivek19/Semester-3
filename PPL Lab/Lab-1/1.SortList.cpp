//1. Program to sort the elements of a given list
#include <iostream>
using namespace std;
//Swap Function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// A function to implement bubble sort
void sortList(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
int main()
{
    int size = 0;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {   cin >> arr[i];    }
    cout << "\nElements before soting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    sortList(arr, size);
    cout << "\nElements after soting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}