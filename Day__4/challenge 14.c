#include<stdio.h>

int main()
{
    int *days[] = {"lundi" "mardi","mercredi","jeudi","vendredi","samedi","demanch"};
    int choix,n;

    printf("\n---- Slecteur de jours de la semaine ----\n");
    printf("Choisissez un jour (1=Lundi, 2=Mardi, ..., 7=Dimanche) :");
    scanf("%d",&choix);

    printf("Combien de jours voulez-vous afficher apres ce jour ? : ");
    scanf("%d",&n);

    printf("\nJours suivants :\n");
    for (int i = 0; i < n; i++)
    {
        int suivant = (choix - 1 + i) % 7;
        printf("%s \n",days[suivant]);
    }
    
    return 0;
}
