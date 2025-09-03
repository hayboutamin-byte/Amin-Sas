#include<stdio.h>

int main()
{
    
    int jour,mois,annee;
    char Nmois[]=
    {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };

    printf("entrer le nombre de jour: ");
    scanf("%d",&jour);
    printf("entrer le nombre de mois: ");
    scanf("%d",&mois);
    printf("entrer le nombre d'annee: ");
    scanf("%d",&annee);

    if(mois <1  || mois >12)
    {
        printf("le mois n'est pas valide");
    }
    if(jour <1  || jour >31)
    {
        printf("le mois n'est pas valide");
    }
    
    printf("%d-%s-%d",jour ,Nmois[mois],annee);

}