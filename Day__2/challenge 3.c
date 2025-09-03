#include<stdio.h>

int main()
{
    int x,y;
    int somme;

    printf("entrer le 1er nombre: ");
    scanf("%d",&x);
    printf("entrer le 2er nombre: ");
    scanf("%d",&y);
    
    if  (x == y)
    {
    
    somme = x + y;

    printf("(%d + %d) x 3 = %d ",x,y,somme*3);

    }
    else{
        printf(" %d + %d = %d",x,y,x+y);
    }

}