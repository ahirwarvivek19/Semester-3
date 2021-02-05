//Q1) What will be the output of the program?
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(20); /* Assume p has address of 1314 */
    printf("%u\n", p);     // 1314
    free(p);
    printf("%u\n", p); //1314
    return 0;
}

//Output:
//1314
