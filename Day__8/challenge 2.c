#include<stdio.h>
#include<string.h>

struct Etudiant
{
    char nom[50];
    char prenom[50];
    char notes[3];
};

int main()
{
    struct Etudiant s1 = {"Mohamed","Amin",{15,16,17}};
    
    printf("les information de l'etudiant\n%s %s\n",s1.nom,s1.prenom);

    for (int i = 0; i < 3; i++)
    {
        printf("les notes [%d]: %d\n",i + 1,s1.notes[i]);
    }
    

    return 0;
}
