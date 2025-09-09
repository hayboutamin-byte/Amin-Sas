#include <stdio.h>

int main()
{
    int n, element, trouve = 0;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    
    printf("Entrez l'element a rechercher : ");
    scanf("%d", &element);


    for (int i = 0; i < n; i++)
    {
        if (tableau[i] == element)
        {
            printf("Element %d trouve a la position %d\n", element, i + 1);
            trouve = 1;
            break;
        }
    }

    
    if (!trouve)
    {
        printf("Element %d non trouve dans le tableau.\n", element);
    }

    return 0;
}
