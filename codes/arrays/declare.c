#include<stdio.h>
#define SIZE 10
int main()
{
    int size = 10;

    int array1[10];
    printf("The size of array1 is %d bytes in the memory.\n", sizeof(array1));
    printf("The number of elements in array1 is %d.\n", (sizeof(array1) / sizeof(int)));

    int array2[size];
    printf("The size of array2 is %d bytes in the memory.\n", sizeof(array2));
    printf("The number of elements in array2 is %d.\n", (sizeof(array2) / sizeof(int)));

    int array3[SIZE];
    printf("The size of array3 is %d bytes in the memory.\n", sizeof(array3));
    printf("The number of elements in array3 is %d.\n", (sizeof(array3) / sizeof(int)));

    int array4[size * 2];
    printf("The size of array4 is %d bytes in the memory.\n", sizeof(array4));
    printf("The number of elements in array4 is %d.\n", (sizeof(array4) / sizeof(int)));

    int array5[++size];
    printf("The size of array5 is %d bytes in the memory.\n", sizeof(array5));
    printf("The number of elements in array5 is %d.\n", (sizeof(array5) / sizeof(int)));

    return 0;
}
