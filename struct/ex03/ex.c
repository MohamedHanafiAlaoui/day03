#include <stdio.h>

struct Passage 
{
   int L;
   int l;
};

int main()
{
    struct  Passage  C;
    printf("enter longueur  et largeur ");

    scanf("%d%d",&C.L,&C.l);      
        printf("%d ",C.l * C.L);
    return 0;
}