#include <stdio.h>
#include <math.h>


int main()
{
    int i,n;
    int fact = 1;

    printf("entrer un numbre: ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
    {
        fact = fact * i;
    }

    printf("Factorielle est : %d",fact);
}