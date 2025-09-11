#include<stdio.h>
#include<string.h>

#define PI 3.14159265

struct Cercle
{
    float Rayon;
};


float rayon_calcule(struct Cercle c){

    return PI * c.Rayon * c.Rayon;
}

int main()
{
    struct Cercle c;

    printf("entrer un nombre: ");
    scanf("%f",&c.Rayon);

    printf("le air de Cercle = %.3f" , rayon_calcule(c));

    
    return 0;
}
