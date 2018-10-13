#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Coding is ", str2[] = "fun";
    printf("before\n");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);
    strcat(str1, str2);
    printf("after\n");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"", str2);
    return 0;
}
