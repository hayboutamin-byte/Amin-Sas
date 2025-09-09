#include <stdio.h>

long long factorielle(int nombre)
{
    long long fact = 1;

    for (int i = 1; i <= nombre; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int nombr;
    
    printf("Entrer un nombre : ");
    scanf("%d", &nombr);

    long long result = factorielle(nombr);
    printf("La factorielle de %d est %lld\n", nombr, result);

    return 0;
}