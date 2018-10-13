#include<stdio.h>
int main()
{
    double d = 3.2, x;
    int i = 2, y;

    x = ( y = d / i) * 2;
    printf("%lf\n", x);
    printf("%lf\n", y);

    y = ( x = d / i ) * 2;
    printf("%lf\n", x);
    printf("%lf\n", y);

    x = d * ( x = 2.5 / d );
    printf("%lf\n", y);

    x = d * ( y = ( (int) 2.9 + 1.1 ) / d);
    printf("%lf\n", y);

    return 0;
}
