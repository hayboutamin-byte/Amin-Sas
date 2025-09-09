#include <stdio.h>

int main()
{
    int n , S = 0;
    
    printf("entrer la taille de tableau: ");
    scanf("%d",&n);

    int T[n];
    for (int i = 0; i < n; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d",&T[n]);
    }
    
    for (int i = 0; i < n; i++)
    {
        S += T[n];
    }
    printf("le resultat est = %d",S);
    

    
}