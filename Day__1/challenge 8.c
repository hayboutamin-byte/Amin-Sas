#include <stdio.h>
#include <math.h>

int  main()
{
    float a,b,c;
    float M_g;

    printf("entrer 1er nombre: ");
    scanf("%f",&a);
    printf("entrer 2er nombre: ");
    scanf("%f",&b);
    printf("entrer 3er nombre: ");
    scanf("%f",&c);

    M_g = pow(a*b*c, 1/3);

    printf("le Moyenne est: %.2f ",M_g);
}