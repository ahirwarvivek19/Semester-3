//Lower Triangular Matrix

#include <stdio.h>

int get1DPos(int i, int j)
{
    return (((i * (i - 1) / 2) + j) - 1);
}

int main()
{
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int twoDArr[n][n];
    
    //Sample Matrix
    // {
    //     1, 0, 0, 0,
    //     2, 3, 0, 0,
    //     4, 5, 6, 0,
    //     7, 8, 9, 1
    // }

    printf("Enter a lower traingular square matrix: \n");
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
        for (int j = 0; (j < n) && (i >= j); j++)
        {

            oneDArr[k] = twoDArr[i][j];
            k++;
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
    k = get1DPos(a, b);
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
