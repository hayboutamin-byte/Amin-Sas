#include<stdio.h>

int main()
{
    int n,somme;

    printf("entrer un nombre : ");
    scanf("%d",&n);

    for(int i = 1; i <= n ; i++) {
       somme += n;


       printf("la somme des %d premiers entiers naturels ",n,somme);


    }

}   