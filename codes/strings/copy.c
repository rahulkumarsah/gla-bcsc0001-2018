#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10]= "coding is";
    char str2[10];
    char str3[10];

    strcpy(str2, str1);
    strcpy(str3, " nice");
    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);
    printf("str3 = \"%s\"\n", str3);
    return 0;
}
