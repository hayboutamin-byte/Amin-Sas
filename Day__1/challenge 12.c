#include <stdio.h>


int  main()
{
    int n, a, b, c, d, inverse;
    printf("entrer les 4 chiffres : ");
    scanf("%d",&n);

    a = n % 10;
    n = n / 10;
    
    b = n % 10;
    n = n / 10;

    c = n % 10;
    n = n / 10;
 
    d = n % 10;

    inverse = a*1000 + b*100 + c*10 + d;

    printf("Inversion d’un Nombre à Quatre Chiffres est : %d",inverse);

}