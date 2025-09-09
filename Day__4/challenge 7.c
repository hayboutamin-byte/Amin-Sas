#include <stdio.h>


int main()
{
    int red1,red2,n,i,re;
    
do
{
    printf("entrer un nombre: ");
    scanf("%d",&n);


} while (n<2);
red1 = 0;
red2 = 1;
printf("F(%d)\n",red1);
printf("F(%d)\n",red2);

for (i= 2;i <= n ; i++)
{

    re = red1 + red2;
    red1 = red2;
    red2 = re ;
    printf("F(%d)=%d\n",i,re);
}
return 0;
}