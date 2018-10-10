#include<stdio.h>
int main()
{
    int i, array[5];
    for ( i = 0 ; (i <= sizeof(array) / sizeof(int)) ; i++)
    {
        printf("i is %d and array[%d] is %d\n", i, i, array[i]);
    }
    return 0;
}
