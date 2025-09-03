#include<stdio.h>

int main()
{
    int annee,choix,mois,jours,heures,minutes,seconds;

    printf("\n--- Welconm to years calculater ---\n");
    printf("entrer le nombre d'annees a convertir: \n");
    scanf("%d",&annee);
    
    printf("\n*** MENU ***\n");
    printf("entrer ton choix: \n");
    printf("1 :Mois.\n");
    printf("2 :Jours.\n");
    printf("3 :Hours.\n");
    printf("4 :Minutes.\n");
    printf("5 :Seconds.\n");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        mois = annee * 12;
        printf(" %d mois",mois);
        break;
    case 2:
        jours = annee * 365;
        printf(" %d jours",jours);
        break;
    case 3:
        jours = annee * 365;
        heures = jours * 24;
        printf(" %d heures",heures);
        break;
    case 4:
        jours = annee * 365;
        heures = jours * 24;
        minutes = heures * 60;
        printf(" %d minutes",minutes);
        break;
    case 5:
        jours = annee * 365;
        heures = jours * 24;
        minutes = heures * 60;
        seconds = minutes * 60;
        printf(" %d secounds ",seconds);
        break;
    
    default:
        printf("error!");
        break;
    }
    


}