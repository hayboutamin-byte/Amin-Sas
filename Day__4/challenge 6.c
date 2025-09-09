#include<stdio.h>

int main()
{
    int i,n;

    printf("entrer un nombre: ");
    scanf("%d",&n);

    printf("le resulltat est : %d",n);

    for (i = 1 ; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d",i);
        }
        
    }
    
    printf("\n");
    

    return 0;
}