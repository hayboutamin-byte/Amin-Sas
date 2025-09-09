#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[])
{
    int debut = 0;
    int fin = strlen(str) - 1;

    while (debut < fin)
    {
        char temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;
        debut++;
        fin--;
    }
    printf("l'inverse est : %s ",str);

}


int main()
{
    char text[100];

    printf("entrer une chaine de caracteres : ");
    scanf("%s",&text);

    inverser_chaine(text);
    

    return 0;
}

