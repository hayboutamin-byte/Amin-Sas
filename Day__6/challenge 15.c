#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Taille du premier tableau : ");
    scanf("%d", &n1);

    int tab1[n1];
    printf("Elements du premier tableau :\n");

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &tab1[i]);
    }
    printf("Taille du second tableau : ");
    scanf("%d", &n2);

    int tab2[n2];

    printf("Elements du second tableau :\n");
    
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &tab2[i]);
    }
    int tabFusion[n1 + n2];

    for (int i = 0; i < n1; i++)
    {
        tabFusion[i] = tab1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        tabFusion[n1 + i] = tab2[i];
    }
    printf("Tableau fusionne : ");

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", tabFusion[i]);
    }
    return 0;
}
