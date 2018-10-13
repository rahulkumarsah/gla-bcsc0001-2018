#include<stdio.h>
int main()
{
    int ctr = 0;

    char name[10];

    printf("The char array (string) 'name' is declared but not initialized.\n");

    printf("If we try to access the values, the array will give us garbage character values.\n");

    printf("|");

    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf(" %c |", name[ctr]);
    }

   char name2[10] = {};

    printf("\n\nThe char array (string) 'name2' is declared and initialized.\n");

    printf("By default, all the values will be set to null = \'\\0\'\n\n");

    printf("|");

    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf(" %c |", name2[ctr]);
    }

    char name3[5] = {'a', 'b'};

    printf("\n\nThe char array (string) 'name2' is declared and initialized but partially.\n");

    printf("Only index 0 and 1 are initialized to 'a' and 'b' resp\n");

    printf("|");

    for ( ctr = 0 ; ctr < 5 ; ctr++ )
    {
        if ( name3[ctr] == '\0' )
            printf("null");
        else
            printf(" %c ", name3[ctr]);
    }

    char name4[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("\n\nThe char array (string) 'name2' is declared and initialized but partially.\n");

    printf("Only index 0 and 1 are initialized to 'a' and 'b' resp\n");

    printf("|");

    for ( ctr = 0 ; ctr < 5 ; ctr++ )
    {
        printf(" %c |", name4[ctr]);
    }

    return 0;
}
