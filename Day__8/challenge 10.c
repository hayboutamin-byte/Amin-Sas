#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 
struct Employe {
    char nom[100];
    int salaire;
};

int main()
{
    int nomber;

    printf("entrer nombre de l'employe: ");
    scanf("%d",&nomber);

    struct Employe *ss = malloc(sizeof(struct Employe) * nomber );

    for (int i = 0; i < nomber; i++)
    {
        printf("entrer nom de l'employe %d : ", i + 1);
        scanf("%s",&ss[i].nom);
        printf("entrer enter le salaire de l'employe: ");
        scanf("%d",&ss[i].salaire);
    }

    for (int i = 0; i < nomber; i++)
    {
        printf("Employe %d | Nom %s | Salaire %d MAD\n",i + 1,ss[i].nom,ss[i].salaire);    
    }

    free(ss);
    
    return 0;
}
