#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    float note;
    int suivant;
};

int main()
{
    struct Etudiant list [3];

    strcpy(list[0].nom,"Yassin");
    list[0].note = 15.70;
    list[0].suivant = 1;

    strcpy(list[1].nom,"Ahmed");
    list[1].note = 16.50;
    list[1].suivant = 2;

    strcpy(list[2].nom,"Yassin");
    list[2].note = 16.50;
    list[2].suivant = -1;

    int i = 0;

    while (i != -1)
    {
        printf("%s | %.2f \n",list[i].nom,list[i].note);
        i = list[i].suivant;
    }
    

    return 0;
}
