#include<stdio.h>


int main()
{
    char C;

    printf("entre un caractere: ");
    scanf("%c",&C);

    if (C >= 'A' && C <= 'Z' )
    {
        printf("le caractre qui entrer est majuscule.");
    }
    else if (C >= 'a' && C <= 'z' )
    {
        printf("le caractre qui entrer est miniscule.");
    }
    else 
    {
        printf("error!");
    }
}