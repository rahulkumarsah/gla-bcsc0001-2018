#include<stdio.h>
#define SIZE 10
int main()
{
    int ctr1 = 0, ctr2 = 0, ctr3 = 0, temp = 0;

    int array1[10] = {99, 88, 77, 66, 55, 44, 33, 22, 11, 00};

    printf("\n----\n");
    printf("The elements of array1 before sorting were:\n|");
    for ( ctr1 = 0 ; ctr1 < SIZE ; ctr1++ )
    {
        printf(" %d |", array1[ctr1]);
    }
    printf("\n----\n The bubble sort operation\n");

    for ( ctr1 = 0 ; ctr1 < (SIZE - 1) ; ctr1++ )
    {
        for ( ctr2 = 0 ; ctr2 < (SIZE - ctr1 - 1) ; ctr2++ )
        {
            if ( array1[ctr2] > array1[ctr2 + 1] )
            {
                temp = array1[ctr2];
                array1[ctr2] = array1[ctr2 + 1];
                array1[ctr2 + 1] = temp;
            }
        }
        for ( ctr3 = 0 ; ctr3 < SIZE ; ctr3++ )
        {
            printf("%d ", array1[ctr3]);
        }
        printf("\n");
    }

    printf("----\n");
    printf("The elements of array1 after sorting are:\n|");
    for ( ctr1 = 0 ; ctr1 < SIZE ; ctr1++ )
    {
        printf(" %d |", array1[ctr1]);
    }
    printf("\n----\n");


    return 0;
}
