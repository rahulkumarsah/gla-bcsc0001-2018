#include<stdio.h>
int main()
{
    int ctr = 0;

    int array1[10];
    printf("\n----\nint array1[10];\n");
    printf("The size of array1 is %d bytes in the memory.\n", sizeof(array1));
    printf("The number of elements in array1 is %d.", (sizeof(array1) / sizeof(int)));
    printf("----\n");
    printf("The elements of array1 are:\n");
    for ( ctr = 0 ; ctr < 10 ; ctr++ )
    {
        printf("array1[%d] = %d\n", ctr, array1[ctr]);
    }
    printf("----\n");
    printf("\nThe values of array1 are all garbage because we have never initialized the values.");

    return 0;
}
