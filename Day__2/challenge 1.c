#include <stdio.h>

int main()
{
    int N1;

    printf("entrer le 1er nombre: ");
    scanf("%d",&N1);

    if (N1 %2 == 0)
    {
        printf("Pair.");
    }
    else
    {
        printf("impair.");
    }

}