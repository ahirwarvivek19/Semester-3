//Assigment 1 - For int datatype

#include <stdio.h>

int main()
{

    int A[10] ;

    printf("Enter 10 elements of integer array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", &A[i]);
    }
    printf("\nSize of integer = %d\n", sizeof(int));

    printf("\n");

    printf("Elements of array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", A[i]);
    }
    printf("\n");

    printf("\nAddress of Elements of array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", &A[i]);
    }

    return 0;
}