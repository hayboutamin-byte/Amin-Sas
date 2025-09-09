#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,Premier = 1; 
    
    printf("entrer un nombre: ");
    scanf("%d",&n);
   
    for (i = 2 ; i < n; i++)
    {
        for (j = 2 ; j < sqrt(i); i++)
        {
            if (i % j == 0)
            {
                Premier == 0;break;
            }
            if (Premier)
            {
                printf("= %d\n",i);
            }
            
        }    
        
    }
    

}