#include<stdio.h>
#include<string.h>

struct Person
{
    char nom[50];
    char prenom[50];
    int age;
};

int main()
{
    struct Person s1;
    

    
    printf("entrer ton nom : ");
    fgets(s1.nom,sizeof(s1.nom),stdin);
    s1.nom[strcspn(s1.nom, "\n")] = 0; 

    printf("entrer ton prenom : ");
    fgets(s1.prenom,sizeof(s1.prenom),stdin);
    s1.prenom[strcspn(s1.prenom, "\n")] = 0; 


    printf("entrer ton age : ");
    scanf("%d",&s1.age);

    printf("les information est : %s\n %s\n %d\n ans",s1.nom,s1.prenom,s1.age);
    
    return 0;
}
