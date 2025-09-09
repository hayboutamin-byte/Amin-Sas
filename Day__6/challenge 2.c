#include <stdio.h>

int main()
{
    int n;

    printf("entres taille de tableau: ");
    scanf("%d",&n);

    int T[n];

    for (int i = 0 ; i <= n; i++)
    {
        printf("T[%d] = ",i + 1);
        scanf("%d",&T[n]);

    }
    for (int i = 0; i <= n; i++)
    {
        printf(" T[%d] = %d \n", i + 1 , T[n]);
    }
    

    

    

}