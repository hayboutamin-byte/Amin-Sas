


#include <stdio.h>


int main()
{
    int x1,x2,n,i,suivant;

    x1 = 0;
    x2 = 1;
    
    if (n <= 0)
    {
        printf("Entrer un numbre positif. ");
    }
    else    
         for (i= 1;i <= n ; i++)
        {
        printf("%d",x1);
        suivant = x1 + x2;
        x1 = x2;
        suivant = x2;
        }
    return 0;
}