//Tridiagonal Matrix

#include <stdio.h>

int get1DPos(int i, int j)
{
    int index;
    if (i == j)
        index = 2 + (3 * (i - 2)) + 1;
    else if (i < j)
        index = 2 + (3 * (i - 2)) + 2;
    else
        index = 2 + (3 * (i - 2));

    return index;
}

int main()
{
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int twoDArr[n][n];

    //Sample Matrix
    // {
    // 1  2  0  0
    // 3  4  5  0
    // 0  6  7  8
    // 0  0  9  1
    // }

    printf("Enter a Tridiagonal square matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &twoDArr[i][j]);
        }
    }

    printf("Given Matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", twoDArr[i][j]);
        }
        printf("\n");
    }

    int size1D = (n - 2) * 3 + 4;
    int oneDArr[size1D];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + 1 == j || i == j + 1)
            {
                oneDArr[k] = twoDArr[i][j];
                k++;
            }
        }
    }

    printf("Elements of one D array: \n");
    for (int i = 0; i < size1D; i++)
    {
        printf("%d  ", oneDArr[i]);
    }

    int a = 0, b = 0, value = 0;

    printf("\n\nEnter row and column to modify: ");
    scanf("%d%d", &a, &b);
    k = get1DPos(a, b);
    printf("Enter value: ");
    scanf("%d", &value);
    oneDArr[k] = value;
    printf("\nUpdated Elements of one D array: \n");
    for (int i = 0; i < size1D; i++)
    {
        printf("%d  ", oneDArr[i]);
    }

    return 0;
}
