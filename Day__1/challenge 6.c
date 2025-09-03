#include <stdio.h>

int  main()
{
    float Ad , S, Mu,Dv;
    float num1,num2;

    printf("entrer le nombre 1: ");
    scanf("%f",&num1);
    printf("entrer le nombre 2: ");
    scanf("%f",&num2);

    Ad = num1 + num2 ;
    S = num1 - num2 ;
    Mu = num1 * num2 ;
    Dv = num1 / num2 ;

    printf("le resultat de num1 + num2 = %.2f\n",Ad);
    printf("le resultat de num1 - num2 = %.2f\n",S);
    printf("le resultat de num1 * num2 = %.2f\n",Mu);
    printf("le resultat de num1 / num2 = %.2f\n",Dv);
}