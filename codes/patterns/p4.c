#include<stdio.h>
int main()
{
    int ctr1 = 0, ctr2 = 0, ctr3 = 0;
    for ( ctr2 = 1 ; ctr2 <= 5 ; ctr2++ )
    {
        for ( ctr1 = 5 ; ctr1 >= ctr2 ; ctr1-- )
        {
            printf(" ");
        }

        for ( ctr3 = ctr2 ; ctr3 >= 1 ; ctr3-- )
        {
            printf("%d", ctr3);
        }

        printf("\n");
    }
    return 0;
}
