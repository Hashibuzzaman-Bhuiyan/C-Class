#include <stdio.h>

int main(void)
{
    char str1[6] = "Seoul";
    char str2[3] = { 'i', 's', '\0' };
    char str3[] = "the capital city of Korea.";

    printf("%s %s %s\n", str1, str2, str3);

    return 0;
}
