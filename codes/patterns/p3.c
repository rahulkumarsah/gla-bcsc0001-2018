#include<stdio.h>
int main()
{
    int ctr1 = 0, ctr2 = 0, ctr3 = 0, n = 0;
    for ( ctr1 = 5 ; ctr1 >= 1 ; ctr1-- )
    {
        //printf("ctr1 %d\n", ctr1);
        for ( ctr2 = n ; ctr2 > 0 ; ctr2-- )
        {
            //printf("ctr2 %d\n", ctr2);
            printf(" ");
        }
        for ( ctr3 = 1 ; ctr3 <= ctr1 ; ctr3++ )
        {
            //printf("ctr3 %d\n", ctr3);
            printf("*");
        }
        //printf("n %d\n", n);
        printf("\n");
        n++;
    }
    return 0;
}
