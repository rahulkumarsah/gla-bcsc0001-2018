#include<stdio.h>
#define SIZE 10
int main()
{
    int ctr = 0;

    int array1[SIZE];

    printf("Enter %d integer values for the array:\n", SIZE);

    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        scanf("%d", &array1[ctr]);
    }

    printf("----\n");
    printf("The elements of array1 are:\n");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");

    return 0;
}
