#include<stdio.h>
int main()
{
    int arr[5], i, j, value;
    printf("Enter 5 values for array:\n");
    for (i = 0 ; i < 4 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter a value:\n");
    scanf("%d", &value);

    printf("Enter an integer from 0 to %d\n", (sizeof(arr)/ sizeof(int)) - 1);
    scanf("%d", &j);

    printf("%d inserted at index %d\n", value, j);

    for ( i = 5 ; i > j ; i-- )
        arr[i] = arr[i - 1];

    arr[i] = value;

    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
