#include<stdio.h>
int main()
{
    int ctr = 0, ctr1 = 0, n = 1;

    for ( ctr = 1 ; ctr <= 4 ; ctr++ )
    {
        for ( ctr1 = 1 ; ctr1 <= ctr ; ctr1++ )
        {
            printf("%d ", n++);
        }
        printf("\n");
    }

    return 0;
}
