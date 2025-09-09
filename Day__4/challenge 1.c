#include<stdio.h>

int main()
{
   int i ,n;

   printf("entrer un nombre : ");
   scanf("%d",&n);


   for (i=10; i<= 1 ;i--)
   {
       printf("%d x %d = %d\n",n,i,n*i);
   }
}