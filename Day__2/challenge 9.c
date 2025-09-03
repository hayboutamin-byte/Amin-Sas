#include<stdio.h>

int main()
{
    char c;

    printf("entrer un caracter: ");
    scanf("%c",&c);

    if (c >= 65 && c <= 90 )
    {
        printf("%c est majuscule.",c);
    }
    else if (c >= 97 && c <= 122 )
    {
        printf("%c est miniscule.",c);
    }
    else 
    {
        printf("error");
    }
}