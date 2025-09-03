#include<stdio.h>

int main()
{
    char c;

    printf("entrer un caractere: ");
    scanf("%c",&c);

    switch (c)
    {
    case 'c':case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("caractere est voyelle.");
        break;
    case 'C':case 'A':case 'E':case 'I':
        printf("caractere est voyelle.");
    default:
        printf("invalide option!");
        break;
    }
}