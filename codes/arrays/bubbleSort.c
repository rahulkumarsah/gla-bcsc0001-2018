#include<stdio.h>
int main()
{
    int array[10] = {}, ctr = 0, temp = 0, ctr2 = 0, ctr3 = 0;

    printf("Enter values for %d elements:\n", 10);
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        scanf("%d", &array[ctr]);
    }

    printf("The array is:\n");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf("%d ", array[ctr]);
    }

    printf("\nThe array after sorting is:\n");
    for ( ctr = 0 ; ctr < (10 - 1) ; ctr++ )
    {
        for ( ctr2 = 0 ; ctr2 < (10 - 1) ; ctr2++ )
        {
            if ( array[ctr2] > array[ctr2 + 1] )
            {
                temp = array[ctr2];
                array[ctr2] = array[ctr2 + 1];
                array[ctr2 + 1] = temp;
            }
            for ( ctr3 = 0 ; ctr3 < 10 ; ctr3++ )
            {
                printf("%d ", array[ctr3]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}
