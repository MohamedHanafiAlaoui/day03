#include <stdio.h>

struct personne 
{
   char name[100];
   char prenom[100];
   int age;
};

int main()
{
    struct  personne C[10];
    printf("enter name et prenom , age ");
    for (int i = 0; i < 2; i++)
    {
    scanf("%s%s%d",&C[i].name,&C[i].prenom,&C[i].age);      
    }
    
    for (int i = 0; i < 2; i++)
        printf("%s %s %d ",C[i].name, C[i].prenom, C[i].age);
    return 0;
}