#include <stdio.h>

int main()
{
    int n;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%n",&n);

    int tableau[n];

    for (int i = 0; i < n; i++)
    {
        printf("T[%d]",i + 1);
        scanf("%d",&tableau[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < n - i -1; i++)
        {
            if (tableau[i] > tableau[j + 1])
            {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
            
        }
        
    }
    printf("Tableau trie en ordre croissant :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tableau[i]);
    }

    
    return 0;
}
