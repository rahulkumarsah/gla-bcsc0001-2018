#include<stdio.h>
int main()
{
    double d;
    float f;
    long l;
    int i;

    i = l = f = d = 100 / 3;
    printf("%g\n", i);
    printf("%g\n", l);
    printf("%g\n", f);
    printf("%g\n", d);

    d = f = l = i = 100 / 3;
    printf("%g\n", i);
    printf("%g\n", l);
    printf("%g\n", f);
    printf("%g\n", d);

    i = l = f = d = 100 / 3;
    printf("%g\n", i);
    printf("%g\n", l);
    printf("%g\n", f);
    printf("%g\n", d);

    d = f = l = i = (float) 100 / 3;
    printf("%g\n", i);
    printf("%g\n", l);
    printf("%g\n", f);
    printf("%g\n", d);

    i = l = f = d = (double) (100000 / 3);
    printf("%g\n", i);
    printf("%g\n", l);
    printf("%g\n", f);
    printf("%g\n", d);

    d = f = l = i = 100000 / 3;
    printf("%g\n", i);
    printf("%g\n", l);
    printf("%g\n", f);
    printf("%g\n", d);

    return 0;
}
