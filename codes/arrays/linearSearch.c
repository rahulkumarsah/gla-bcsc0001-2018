#include<stdio.h>
int main()
{
    int array[10] = {}, ctr = 0, value = 0;

    printf("\nEnter values for %d elements:\n", 10);
    for ( ctr = 0 ; ctr < 10 ; ctr++)
    {
        scanf("%d", &array[ctr]);
    }

    printf("\nThe elements in the array are:\n");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf("%d ", array[ctr]);
    }

    printf("\nEnter a value to search in the array:\n");
    scanf("%d", &value);

    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        if ( array[ctr] == value )
        {
            printf("\nvalue %d found at index %d", value, ctr);
            //break;
        }
    }

    return 0;
}
