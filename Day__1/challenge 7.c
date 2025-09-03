#include <stdio.h>

int  main()
{
    float a,b,c;
    float Moyenne;

    printf("entrer 1er nombre: ");
    scanf("%f",&a);
    printf("entrer 2er nombre: ");
    scanf("%f",&b);
    printf("entrer 3er nombre: ");
    scanf("%f",&b);

    Moyenne = (a * 2 + b * 3 + c * 5) / (2+3+5);

    printf("le Moyenne est: ",Moyenne);

}