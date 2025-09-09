#include <stdio.h>

int main()
{
    int num , sum = 0;
    int moyenne,count = 0;

    while (1)
    {
    printf("entrez un nombre (0 to stop) :");
    scanf("%d",&num);

        if (num == 0)
        {
            break;



        }

        sum += num;
        count++;
  
    }
        moyenne = sum / count;
        printf("result = %d ",moyenne);

    return 0;
}
