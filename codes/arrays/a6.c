#include<stdio.h>
int main()
{
    int i = 0, num;
    int arr[20];
    printf("Enter some integers:\n");
    while ( scanf("%d", &arr[i]) == 1 )
    ;
    num = i - 1;
    for ( i = 0 ; i < num ; i++ )
        printf("arr[%d] = %d", i, arr[i]);
    return 0;
}
