#include<stdio.h>
#include<string.h>

struct Livre
{
    char titre[50];
    char auteur[50];
    int annee;
};

struct Livre CreerLivre()
{
    struct Livre liv;
    strcpy(liv.auteur,"Ahmed Mohamed");
    strcpy(liv.titre,"POWER");
    liv.annee = 1898;

    return liv;


}

int main()
{
    struct Livre liver = CreerLivre();

    printf("Auteur: %s\n",liver.auteur);
    printf("Titre: %s\n",liver.titre);
    printf("Annee: %d\n",liver.annee);


    return 0;
}
