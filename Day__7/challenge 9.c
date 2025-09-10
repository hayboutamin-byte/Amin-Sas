#include<stdio.h>
#include<string.h>

int main()
{
    char chaine[100];

    printf("enter un chaine de caracter : ");
    fgets(chaine,sizeof(chaine),stdin);
    chaine[strcspn(chaine, "\n")] = '\0';

    int  j = 0;
    for (int i = 0; chaine [i] != '\0'; i++)
    {
        if (chaine != ' ')
        {
            chaine [j] = chaine [i] ;
        }
        j++;
    }
    chaine[j] = '\0';

    printf("chaine de caracter : %s",chaine);
}