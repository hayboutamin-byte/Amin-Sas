#include <stdio.h>

int main()
{
    int T[10];
    int mini1,mini2;

    for (int i = 0; i < 10 ; i++)
    {
        printf("T[%d] = ",i + 1);
        scanf("%d",&T[i]);
    }
    mini1 = T[0];
    mini2 = T[0];
    for (int i = 0; i < 10; i++)
    {
        if (T[i] < mini1)
        {
            mini2 = mini1;
            mini1 = T[i];
        }
        if (T[i] < mini1 && T[i] > mini1 )
        {
            mini2 = T[i];
        }   
    }

    printf("le premier plus petit element de tableau est : %d \n",mini1);
    printf("le premier plus petit element de tableau est : %d \n",mini2);


    return 0;
}
