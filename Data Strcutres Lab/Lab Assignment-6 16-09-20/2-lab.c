//Q2) What will be the output of the program (16-bit platform)?
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(20);
    printf("%d\n", sizeof(p));
    free(p);
    return 0;
}
// for 16 bit
// output : 2

// for 32 bit
// output: 4
