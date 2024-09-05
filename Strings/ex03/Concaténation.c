#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    printf("enter str1 : ");
    scanf("%s",&str1);
    printf("enter str2 : ");
    scanf("%s",&str2);
    printf("=================\n%s",strcat(str1,str2));
    return 0;
}
