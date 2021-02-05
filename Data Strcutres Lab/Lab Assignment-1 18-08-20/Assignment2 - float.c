//Assigment 2 - For float datatype

#include <stdio.h>

int main()
{

    int n = 2;
    float ar[n][n];
    printf("Enter the elements of %d*%d array:\n", n, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &ar[i][j]);
        }
    }

    printf("\nValues and addresses of elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Value = %f, Address = %d     ", ar[i][j], &ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}