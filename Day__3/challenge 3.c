#include <stdio.h>
 
int main()
{
    int n,r;

    printf("entrer un nombre: ");
    scanf("%d",&n);

    r= n*(n+1)/2;

    printf("Nombres Naturels est : %d ",r);
}