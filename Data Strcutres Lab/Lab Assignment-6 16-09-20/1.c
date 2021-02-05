#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Static memory allocation
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;

    printf("Static Memory Allocation\n");
    printf("x = %d\n", x);
    x = 20;
    printf("x = %d\n", x);
    *p1 = 5;
    printf("x = %d\n", *p1);
    **p2 = 25;
    printf("x = %d\n", **p2);

    //Dynamic Memory allocation
    printf("Dynamic Memory Allocation\n");
    int *p3 = (int *)malloc(sizeof(int));
    *p3 = 90;
    printf("p3 = %d\n", *p3);
    free(p3);
    printf("p3 = %d\n", *p3);

    return 0;
}
