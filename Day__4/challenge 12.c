#include<stdio.h>

int main(){

    int T[5] = {5,2,7,87,142,14};
    int n = 6;
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5 ;j++)
        {
            if (T[i]<T[j])
            {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",T[i]);
        
    }
    
    
    
    return 0;
}
