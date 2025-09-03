#include<stdio.h>

int main()
{
    float m_s;
    float Km_h;

    printf("entrer la vitesse en K/h: ");
    scanf("%f",&Km_h);

    m_s = Km_h * 1093.61;

    printf("la vitesse en m/s est %.2f",m_s);
}