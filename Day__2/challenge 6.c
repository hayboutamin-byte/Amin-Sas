#include<stdio.h>

int main()
{
    int N;

    printf("entrer un nombre: ");
    scanf("%d",&N);

    if (N > 0)
    {
        printf("le nomber est positif. ");
    }
    else if(N < 0)
    {
        printf("le nomber est negativ. ");
    }
    else if ( N == 0)
    {
        printf("le nomber est nul. ");
    }
}