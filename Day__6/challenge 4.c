#include <stdio.h>

int main()
{
    int T[10];
    int max1 , max2;

    for (int i = 0; i < 10 ; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d",&T[i]);
    }
    max1 = T[0] ;
    max2 = T[0] ;

    for (int i = 1 ; i < 10; i++)
    {
        if (T[i] > max1)
        {
            max2 = max1;
            max1 = T[i];
        }
        if (T[i] > max2 && T[i] < max1  )
        {
            max2 = T[i];
        } 
    }
    printf("le premier plus grans element de tableau est : %d \n",max1);
    printf("le premier plus grans element de tableau est : %d \n",max2);    
}