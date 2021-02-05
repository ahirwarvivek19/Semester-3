#include <iostream>
using namespace std;

void minMax(int a[100][100])
{
    int i, j;
    int Min = INT_MAX, Max = INT_MIN;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (Max < a[i][j])
            {
                Max = a[i][j];
            }

            if (Min > a[i][j])
            {
                Min = a[i][j];
            }
        }
    }

    cout << "Largest Element: " << Max << endl;
    cout << "Smallest Element: " << Min << endl;
}

void secondLargest(int a[100][100])
{
    int i, j;
    int Max = INT_MIN, secondMax = INT_MIN;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (Max < a[i][j])
            {
                Max = a[i][j];
            }

            if (secondMax < a[i][j] && a[i][j] != Max)
            {
                secondMax = a[i][j];
            }
        }
    }
    cout << "Second Largest Element: " << secondMax << endl;
}

void sequentialSearch(int a[100][100], int key)
{
    bool r = false;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (a[i][j] == key)
            {
                cout << "Key found at location " << i << " " << j << endl;
                r = true;
            }
        }
    }
    if (r == false)
    {
        cout << "Key not found" << endl;
    }
}

int main()
{
    int ar[100][100];
    int i, j;
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            ar[i][j] = rand() % 100 + 1;
        }
    }
    int choice;
    while (true)
    {
        cout << "Enter your choice" << endl;
        cout << "1 Largest and Smallest Element of array" << endl;
        cout << "2 Second Largest Element of array" << endl;
        cout << "3 Find element in array" << endl;
        cout << "0 Exit" << endl
             << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            cout << endl;
            minMax(ar);
            cout << endl;
            break;
        case 2:
            cout << endl;
            secondLargest(ar);
            cout << endl;
            break;
        case 3:
        {
            int key;
            cout << "\nEnter key to Search: ";
            cin >> key;
            sequentialSearch(ar, key);
            break;
        }

        default:
            cout << "Enter Valid choice" << endl;
            break;
        }
        cout << endl
             << endl;
    }
    return 0;
}
