#include<stdio.h>
#define SIZE 10
int main()
{
    int ctr = 0, index = -1;

    int array1[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    printf("----\n");
    printf("The elements of array1 before deletion were:\n");
    for ( ctr = 0 ; ctr < SIZE ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");

    printf("Enter the index to be deleted:\n");
    scanf("%d", &index);

    // ---- This is the logic for deletion
    for ( ctr = index ; ctr < (SIZE - 1) ; ctr++ )
    {
        array1[ctr] = array1[ctr + 1];
    }
    // ---- logic ends here

    printf("----\n");
    printf("The elements of array1 after deletion are:\n");
    for ( ctr = 0 ; ctr < (SIZE - 1) ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");


    return 0;
}
