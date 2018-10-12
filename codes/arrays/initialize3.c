#include<stdio.h>
int main()
{
    int ctr = 0;

    int array1[10] = {1, 2, 3};
    printf("\n----\nint array1[10] = {1, 2, 3};\n");
    printf("The size of array1 is %d bytes in the memory.\n", sizeof(array1));
    printf("The number of elements in array1 is %d.", (sizeof(array1) / sizeof(int)));
    printf("----\n");
    printf("The elements of array1 are:\n");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");
    printf("\nThe values of array1 are all like this because we have only partially initialized the values for index 0, 1 and 2.");

    return 0;
}
