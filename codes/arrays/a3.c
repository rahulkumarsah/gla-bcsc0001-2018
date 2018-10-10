#include<stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE], i;
    for ( i = 0 ; i < SIZE ; i++ )
    {
        array[i] = i + 2;
    }
    for ( i = 0 ; i < SIZE ; i++ )
    {
        printf("%d", array[i]);
    }
    return 0;
}
