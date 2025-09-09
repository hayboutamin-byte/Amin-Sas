#include<stdio.h>

int main()
{
    int num , sum =0;

    printf("entrer un nombre: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        int result = num * i;
        printf("%d x %d = %d \n",num ,i,result);
         sum  += result;

    }
    printf("result eest = %d\n",sum);
    return 0;
}