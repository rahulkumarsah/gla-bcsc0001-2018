#include<stdio.h>
#define SIZE 10
int main()
{
    int ctr = 0, value = 0, found = 0;
    // we will use this found variable as a flag
    // if found is set to 1 at any time, then it means that the value was found
    // if found is always 0, then it means that the value was no found in the array

    int array1[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    printf("----\n");
    printf("The elements of array1 are:\n");
    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");

    printf("Enter the value you want to search the array for:\n");
    scanf("%d", &value);

    for ( ctr = 0 ; ctr < SIZE  ; ctr++ )
    {
        if ( array1[ctr] == value )
        {
            found = 1;
            break;
        }
    }

    // checking if the found was set to 1
    if (found == 1)
    {
        printf("array[%d] = %d", ctr, value);
    }
    else
    {
        printf("Value not found");
    }

    return 0;
}
