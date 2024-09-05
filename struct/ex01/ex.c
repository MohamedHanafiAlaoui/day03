#include <stdio.h>

struct personne 
{
   char name[100];
   char prenom[100];
   int age;
};

int main()
{
    struct  personne n1;
    printf("enter name et prenom , age ");

    scanf("%s%s%d",&n1.name,&n1.prenom,&n1.age);
    printf("%s %s %d",n1.name,n1.prenom,n1.age);
    return 0;
}