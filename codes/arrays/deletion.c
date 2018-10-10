#include<stdio.h>
#define SIZE 5
int main()
{
    int array[SIZE] = {}, ctr = 0, index = -1;

    printf("Enter %d elements for the array:\n", SIZE);

    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        scanf("%d", &array[ctr]);
    }

    printf("The array with %d elements is:\n|", SIZE);

    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        printf(" %d |", array[ctr]);
    }

    printf("\nEnter the index to delete: (0 to %d)\n", SIZE - 1);

    scanf("%d", &index);

    for ( ctr = index ; ctr < (SIZE - 1) ; ctr++ )
    {
        array[ctr] = array[ctr + 1];
        ctr[array] = array[ctr + 1];
    }

    printf("The array after deleting index %d is:\n|", index);

    for ( ctr = 0 ; ctr < (SIZE - 1) ; ctr++ )
    {
        printf(" %d |", array[ctr]);
    }

    return 0;
}
