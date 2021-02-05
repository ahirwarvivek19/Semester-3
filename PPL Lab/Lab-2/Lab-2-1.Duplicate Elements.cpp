//Write a program to find duplicate elements from an array and then after remove the duplicate elements.

#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0;
    ;
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the " << size << " elements of the array:" << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate Elements: " << endl;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            //  If any duplicate found
            if (arr[i] == arr[j])
            {

                // Print the duplicate element
                cout << arr[j] << " ";

                /* Delete the current duplicate element */
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;

                j--;
            }
        }
    }

    cout << "\nArray after removing duplicate elements: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
