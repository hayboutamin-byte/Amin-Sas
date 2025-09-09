#include<stdio.h>

int main()
{

    int exposant,base;
    int resultat = 1;



    printf("enter l'exposant : ");;
    scanf("%d",&exposant);
    printf("enter l'exposant : ");;
    scanf("%d",&base);

    if (exposant == 0)
    {
        resultat = 1;
    }
    else if (base == 0)
    {
        resultat = 0;
    }
    else
    {
        int i = 0;
        while ( i < exposant)
        {
            resultat *= base;
            i++;
        }
        printf("%d ^ %d = %d\n", base, exposant, resultat);

    }
    
    


    return 0;
}