#include<stdio.h>
int main()
{
    int ctr1 = 0, ctr2 = 0;
    char c = 65;
    for ( ctr1 = 1 ; ctr1 <= 5 ; ctr1++ )
    {
        //c = 'A';
        for ( ctr2 = 1 ; ctr2 <= ctr1 ; ctr2++ )
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
