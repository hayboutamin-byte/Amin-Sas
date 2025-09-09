#include <stdio.h>


int maximum(A,B)
{
    if (A > B)
    {
        printf(" A est superieur B");
    }
    else
    {
        printf(" B est superieur A");
    }
    
    
    
}



int main()
{
    int A,B;

    printf("Enter nombre A: ");
    scanf("%d", &A);

    printf("Enter nombre B: ");
    scanf("%d", &B);
    
    maximum(A,B);

    return 0;
}