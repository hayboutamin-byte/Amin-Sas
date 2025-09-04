#include <stdio.h>

int main()
{
    int i,n,odd = 1;

    printf("entrer un nombre: ");
    scanf("%d", &n);
    
    printf("Les %d premiers nombres impairs :\n", n);

    for (i = 1 ; i <= n ;i++)
    {
        printf("%d ", odd);
        odd += 2;
    }


}