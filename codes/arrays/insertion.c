#include<stdio.h>
#define SIZE 10
int main()
{
    int ctr = 0, index = -1, value = 0;

    int array1[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    printf("----\n");
    printf("The elements of array1 before insertion were:\n");
    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");

    printf("Enter the value to be inserted:\n");
    scanf("%d", &value);

    printf("Enter the index to insert the value at:\n");
    scanf("%d", &index);

    // ---- This is the logic for insertion
    for ( ctr = (SIZE - 1) ; ctr > index ; ctr-- )
    {
        array1[ctr] = array1[ctr - 1];
    }
    array1[ctr] = value;
    // ---- logic ends here

    printf("----\n");
    printf("The elements of array1 after insertion are:\n");
    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");


    return 0;
}
