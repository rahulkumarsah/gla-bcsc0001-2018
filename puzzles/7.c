#include <stdio.h>
int main()
{
    int x = -2;
    unsigned int ux = -2;

    printf("%d\n", x);
    printf("%d\n", ux);

    printf("%o\n", x);
    printf("%o\n", ux);

    printf("%d\n", x>>1);
    printf("%d\n", ux>>1);

    printf("%o\n", x>>1);
    printf("%o\n", ux>>1);

    return 0;
}
