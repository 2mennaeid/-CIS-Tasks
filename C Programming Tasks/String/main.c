#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    char *str3;
    scanf("%s",str1);
    scanf("%s",str2);
    str3 = strcat(str1,str2);
    printf("\n%s",str3);
    return 0;
}
