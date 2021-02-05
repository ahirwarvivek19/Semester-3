//Assigment 1 - For char datatype

#include <stdio.h>

int main()
{

    char A[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',};

    printf("\n");

    printf("Size of char = %d\n", sizeof(char));

    printf("\n");

    printf("Elements of array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c   ", A[i]);
    }
    printf("\n");

    printf("\nAddress of Elements of array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", &A[i]);
    }

    printf("\n");

    return 0;
}