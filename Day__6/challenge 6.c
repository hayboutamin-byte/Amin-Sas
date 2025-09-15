#include <stdio.h>

int main()
{
    int n, facteur;


    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n], resultat[n];

    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    for (int i = 0; i < n; i++)
    {
        resultat[i] = tableau[i] * facteur;
    }

    printf("Tableau resultant :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", resultat[i]);
    }

    return 0;
}
