#include <stdio.h>

int main()
{
    int n;

    printf("Entrez le nombre d'elements du tableau :");
    scanf("%d", &n);

    int original[n],copee[n];

    for (int i = 0; i < n; i++)
    {
        printf("T[%d] = ",i + 1);
        scanf("%d",&original[i]);
    }

    for (int i = 0; i < n; i++)
    {
        copee[i] = original[i];
    }

        for (int i = 0; i < n; i++)
    {
        printf("%d ", original[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", copee[i]);
    }
    
    
    return 0;
}