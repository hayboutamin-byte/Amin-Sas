#include<stdio.h>
#include<string.h>

int main()
{
    char chaine[100];
    char c [100];

    printf("entrer un chaine de caracters: ");
    fgets(chaine,sizeof(chaine),stdin);
    chaine[strscpn(chaine , '\n') ] = 0;

    printf("entrer un chaine de caracters: ");
    fgets(c,sizeof(c),stdin);
    chaine[strscpn(chaine , '\n') ] = 0;

    if (strstr(chaine,c) != NULL )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}