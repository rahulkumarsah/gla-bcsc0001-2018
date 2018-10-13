#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("str1 = %s, str2 = %s\n", str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("str1 = %s, str3 = %s\n", str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
