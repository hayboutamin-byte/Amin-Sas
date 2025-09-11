#include<stdio.h>
#include<string.h>

struct Rectangle
{
    float largeur,longeur;
};

int area(struct Rectangle r1){

    return r1.largeur * r1.longeur;
}

int main()
{
    struct Rectangle len;
    
    len.largeur = 7;
    len.longeur = 3;

    printf("le surfaces geometriques : %.2f",area(len));
    
    return 0;
}
