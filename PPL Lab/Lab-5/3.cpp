// Write a program in C/c++ to compute the sum of all elements in a Z-matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter Order of matrix" << endl;
    cin >> n;
    int a[n][n];
    cout << "Enter elements of matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum = 0;

    for (j = 0; j < n - 1; j++) // 0 th row
        sum = sum + a[0][j];

    for (j = 1; j < n; j++) // last row
        sum = sum + a[n - 1][j];

    for (i = 0, j = n - 1; i < n, j >= 0; i++, j--) // diagonal
    {
        sum = sum + a[i][j];
    }

    cout << "sum= " << sum;

    return 0;
}
