#include <stdio.h>
#include <math.h>

int  main()
{
    float r;
    float M_PI = 3.14159;
    float Volume;

    printf("entrer valeur de r : ");
    scanf("%f",&r);

    Volume = (4/3) * M_PI * pow(r,3);

    printf("le Volume d'une est : %.2f",Volume);
}