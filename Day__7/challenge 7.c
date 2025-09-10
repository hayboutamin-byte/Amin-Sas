#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char c;

    printf("Saisir la chaine de caracters:  ");
    scanf("%c",&c);

    char upper = toupper(c);

    printf("le caracter en Majuscules est : %c ",upper);
    

}