#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int array[n];
    printf("the size of integer array \"array\" is %d bytes\n", sizeof(array));
    printf("%d X 4 = %d bytes", n, sizeof(array));
    return 0;
}
