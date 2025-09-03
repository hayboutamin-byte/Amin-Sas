#include <stdio.h>


int  main()
{
    float lon,lar;
    float Surface;

    printf("enter la valeur de  longeur: ");
    scanf("%d",&lon);
    printf("enter la valeur de  largeur: ");
    scanf("%d",&lar);

    Surface = lon * lar;

    printf("le Surface d'un Rectangle est : %.2f",Surface);

}