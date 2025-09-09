#include <stdio.h>


int  main()
{
    int n,inverse = 0;
    printf("entrer les nombres : ");
    scanf("%d",&n);

    while (n != 0)
    {
        int x = n % 10;
        inverse = inverse * 10 + x;
        n /= 10;

    }
    printf("%d",inverse);
    
}