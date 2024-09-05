#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int i ;
    printf("enter str1 : ");
    scanf("%s",&str1);
    printf("enter str2 : ");
    scanf("%s",&str2);
    i = strcmp(str1,str2);
    if (i != 0)
    {
        printf(" \nnon comarisonte");
    }else
    {
        printf(" ==================\n *comarisonte* ");

    }
    
    return 0;
}
