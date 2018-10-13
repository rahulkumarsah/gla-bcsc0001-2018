#include<stdio.h>
#define SIZE 5
int main()
{
    int ctr = 0;

    char array[SIZE];

    printf("Enter %d elements for the array:\n", SIZE);

    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        scanf("%c ", &array[ctr]);
    }

    printf("|");

    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        printf(" %c |", array[ctr]);
    }

    return 0;
}
