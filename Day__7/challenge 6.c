#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];
   int count = 0;
   char c;

   printf("Saisir la chaine principale :  ");
   fgets(str,sizeof(str),stdin);
   printf("Saisir le caractere a rechercher : ");
   scanf("%c",&c);

   for (int i = 0; i < str[i] != '\0'; i++)
   {
      count++;
   }
   printf("%d",count);
   
   

}