#include <stdio.h>

int main()
{
    int n;

    printf("Taille du tableau : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Le tableau est vide.\n");
        return 0;
    }

    int tab[n];
    double somme = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    double moyenne = somme / n;

    printf("La moyenne est : %.2lf\n", moyenne);

    return 0;
}
