#include<stdio.h>

int main()
{
    float Yards;
    float Km;

    printf("entrer la distance en kilometres: ");
    scanf("%f",&Km);

    Yards = Km * 1093.61;

    printf("la distance en yards est %.2f",Yards);
}