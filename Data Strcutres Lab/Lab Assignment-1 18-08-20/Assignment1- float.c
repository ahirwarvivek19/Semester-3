//Assigment 1 - For float datatype

#include <stdio.h>

int main()
{

    float A[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

    printf("\n");

    printf("Size of integer = %d\n", sizeof(float));

    printf("\n");

    printf("Elements of array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f   ", A[i]);
    }
    printf("\n");

    printf("\nAddress of Elements of array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ", &A[i]);
    }

    return 0;
}