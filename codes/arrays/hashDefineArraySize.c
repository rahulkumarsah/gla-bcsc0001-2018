#include<stdio.h>
#define SIZE 5
int main()
{
    int array[SIZE];
    //int array[10];
    printf("size of array is %d\n", sizeof(array));
    printf("%d bytes for an int and then\n", sizeof(int));
    printf("size of array %d X size of one int %d", SIZE, sizeof(int));
    return 0;
}
