#include<stdio.h>
int main()
{
    int array[10] = {}, ctr = 0;

    for ( ctr = 0 ; ctr < 10 ; ctr++ )
        printf("_____");
    printf("\n");

    printf("|");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf(" %d |", ctr);
    }
    printf("\n");

    for ( ctr = 0 ; ctr < 10 ; ctr++ )
        printf("_____");
    printf("\n");

    printf("|");

    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf(" %d |", ctr[array]);
    }

    printf("\n");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
        printf("_____");

    return 0;
}
