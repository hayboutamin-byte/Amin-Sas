#include<stdio.h>

int  main()
{
    char name[50];
    char prenom[50];
    int age;
    int sexe;
    char Adresse_email[100];

    printf("\n--- Welcom to challenge 1 ---\n");
    printf("entrer votre nom : ");
    scanf("%s",name);
    printf("entrer votre prenom : ");
    scanf("%s",prenom);
    printf("entrer votre Adress email : ");
    scanf("%s",Adresse_email);
    printf("entrer votre sexe : ");
    scanf("%d",&sexe);    
    printf("entrer votre age : "); 
    scanf("%d",&age);

    getchar();
    printf("ton nom est: %s \n",name);
    printf("ton prenom est: %s \n",prenom);
    printf("ton Adresse email est: %s \n",Adresse_email);
    printf("ton age est: %d \n",age);
    printf("ton sexe est: %d \n",sexe);


}