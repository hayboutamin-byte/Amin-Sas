#include<stdio.h>
#include<string.h>

int main()
{
    char caracter[50];

    printf("entrer chaines de caracteres : ");
    fgets(caracter,sizeof(caracter),stdin);

    printf("%s",caracter);
}