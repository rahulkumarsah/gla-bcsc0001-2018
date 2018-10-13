#include<stdio.h>

int say_hello(void)
{
    return printf("Hello");
}

int main()
{
    int x;
    x = say_hello();
    printf("\nx is %d", x);
    return "97";
}
