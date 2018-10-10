#include<stdio.h>
int main()
{
    int array[10], i;
    array[2] = 2; // = {};
    printf("a simple array value %d\n", array[0]);
    printf("the value of i is %d", i);
    //array[5] = 19;
    //printf("value of array at index 5 %d\n", array[5]);
    printf("\n| ");
    for ( i = 0 ; i < 10 ; i++)
    {
        printf("%d | ", array[i]);
    }
    return 0;
}
