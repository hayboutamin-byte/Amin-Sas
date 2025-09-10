#include<stdio.h>
#include<string.h>

int main()
{
    char caracter[50];
    int longeur = 0;

    printf("entrer des chaines de caracteres: ");
    fgets(caracter,sizeof(caracter),stdin);

    while (caracter[longeur] != '\0')
    {
        longeur++;
    }
    
    printf("Longueur de chaine de caracteres: %d",longeur - 1);
      
}