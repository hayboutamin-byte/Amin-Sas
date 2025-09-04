#include <stdio.h>

int main()
{
    int i,n,odd = 2;

    printf("entrer un nombre: ");
    scanf("%d", &n);
    
    printf("Les %d premiers nombres pairs :\n", n);

    for (i = 1 ; i <= n ;i++)
    {
        printf("%d ", odd);
        odd += 2;
    }


}