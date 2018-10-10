#include<stdio.h>
int main()
{
    int arr[10];
    for (int i = 0 ; i < 10 ; i++)
    {
        arr[i] = 0;
        printf("The value of arr at index %d at memory location  %d is %d\n", i, &arr[i], arr[i]);
    }
    int a, b;
    printf("memory location of a is %d and b is %d \n", &a, &b);
    return 0;
}
