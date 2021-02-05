//Assigment 2 - For int datatype

#include <stdio.h>

int main()
{

    int n=4;
    int ar[n][n];
    printf("Enter the elements of %d*%d array:\n",n,n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }

    printf("\nValues and addresses of elements of array:\n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Value = %d, Address = %d     ",ar[i][j],&ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}