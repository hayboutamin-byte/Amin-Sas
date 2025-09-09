#include<stdio.h>

int main()
{
    int n,i,res;

    printf("entrer un nombre: ");
    scanf("%d",&n);

    for (i = 1; i < n; i++)
    {
        res = n * (n+1)/2;
    }

    printf("La somme des %d premiers nombres naturels est : %d\n",n,res);

    return 0;
}
