//Upper Triangular Matrix

#include <stdio.h>

int get1DPos(int i, int j, int n)
{
    return n * (n + 1) / 2 - ((n - i) * (n - i + 1) / 2 + n - j) - 1;
}

int main()
{
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int twoDArr[n][n];

    //Sample Matrix
    // {
        // 1 2 3 4
        // 0 5 6 7
        // 0 0 8 9
        // 0 0 0 8
    // }

    printf("Enter a Upper traingular square matrix: \n");
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
            printf("%d ", twoDArr[i][j]);
        }
        printf("\n");
    }

    int size1D = n * (n + 1) / 2;
    int oneDArr[size1D];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                oneDArr[k] = twoDArr[i][j];
                k++;
            }
        }
    }

    printf("Elements of one D array: \n");
    for (int i = 0; i < size1D; i++)
    {
        printf("%d ", oneDArr[i]);
    }

    int a = 0, b = 0, value = 0;

    printf("\n\nEnter row and column to modify: ");
    scanf("%d%d", &a, &b);
    k = get1DPos(a, b, n);
    printf("Enter value: ");
    scanf("%d", &value);
    oneDArr[k] = value;
    printf("\nUpdated Elements of one D array: \n");
    for (int i = 0; i < size1D; i++)
    {
        printf("%d ", oneDArr[i]);
    }

    return 0;
}
