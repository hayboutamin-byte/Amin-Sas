#include<stdio.h>

int  main()
{
    float C;
    float K;

    printf("entrer le température en Celsius: ");
    scanf("%f",&C);

    K = C + 273.15;

    printf("le température en Kelvin est: %.2f",K);

}