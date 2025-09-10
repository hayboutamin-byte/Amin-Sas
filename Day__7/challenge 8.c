#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char c;

    printf("entres un chaine de caracter : ");
    scanf("%c",&c);

    char ower = tolower(c);

    printf("la Minuscule de chaine de caracter est : %c ",ower);

}