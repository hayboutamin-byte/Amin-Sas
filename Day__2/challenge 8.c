#include <stdio.h>

int main ()
{
    float N;
    
    printf("entrer ton moyenne: ");
    scanf("%f",&N);

    if (N < 10)
    {
        printf("Echec (Recale).");
    }
    else if (10 <= N <12)
    {
        printf("Passable.");
    }
    else if (12 <= N <14)
    {
       printf("Assez Bien."); 
    }
    else if (14 <= N <16)
    {
       printf("Bien."); 
    }
    else if (N >= 16)
    {
       printf("tres Bien."); 
    }
    else
    {
        printf("error!");
    }

}