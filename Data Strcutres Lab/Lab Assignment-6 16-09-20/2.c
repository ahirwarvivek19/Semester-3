#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Static memory allocation

    //User defined types
    struct type1
    {
        int a;
        float b;
    };

    printf("Static Memory Allocation\n");
    struct type1 s;
    s.a = 5;
    s.b = 3.14;

    printf("a= %d   b = %f\n", s.a, s.b);

    struct type1 *p4 = &s;
    p4->a = 15;

    printf("a= %d   b = %f\n", p4->a, p4->b);

    //Dynamic memory allocation

    struct type1 *p5 = (struct type1 *)malloc(sizeof(struct type1));
    p5->a = 10;
    p5->b = 10.2;

    printf("a= %d   b = %f\n", p5->a, p5->b);
    free(p5);

    //output after free p5
    printf("a= %d   b = %f \n", p5->a, p5->b);

    return 0;
}
