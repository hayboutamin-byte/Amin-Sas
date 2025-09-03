#include <stdio.h>
#include <math.h>

int  main()
{
    float x1,y1,z1,x2,y2,z2;
    float Distance;

    printf("entrer 1er nombre: ");
    scanf("%f",&x1);
    printf("entrer 2er nombre: ");
    scanf("%f",&y1);
    printf("entrer 3er nombre: ");
    scanf("%f",&z1);
    getchar();
    printf("entrer 1er nombre: ");
    scanf("%f",&x2);
    printf("entrer 2er nombre: ");
    scanf("%f",&y2);
    printf("entrer 3er nombre: ");
    scanf("%f",&z2);

    Distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));

    printf("la Distance entre Deux Points en 3D est: ",Distance);


}