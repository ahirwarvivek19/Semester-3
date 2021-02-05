//Write a program to generate all sets of two elements such that the sum of sets is less than the maximum element of given array.

#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0;
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the " << size << " elements of the array:" << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int sum = 0;
    cout << "Sets are: " << endl;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            if (sum < max)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}
