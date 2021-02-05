// Write a program to combine two arrays and then sort the array.

#include <iostream>
using namespace std;

void sortArray(int ar[], int n)
{
    int temp=0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                 temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n1, n2, i, j;
    cout << "Enter size of first and second array array: ";
    cin >> n1 >> n2;
    int ar1[n1];
    int ar2[n2];

    cout << "Enter elements of First array" << endl;
    for (i = 0; i < n1; i++)
    {
        cin >> ar1[i];
    }

    cout << "Enter elements of Second array" << endl;
    for (i = 0; i < n2; i++)
    {
        cin >> ar2[i];
    }

    int size = n1 + n2;

    int newAr[size] = {0};

    for (i = 0; i < n1; i++)
    {
        newAr[i] = ar1[i];
    }

    for (j=0; j<n2; j++)
    {
        newAr[i++] = ar2[j];
    }

    sortArray(newAr,size);
    cout << "Sorted Array: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << newAr[i] << " ";
    }

    return 0;
}
