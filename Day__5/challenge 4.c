#include <stdio.h>


int minimum(int A, int B)
{
    if (A < B)
    {
        printf(" A est inferieur B");
    }
    else
    {
        printf(" B est inferieur A");
    }
        
}

int main()
{
    int A,B;

    printf("Enter nombre A: ");
    scanf("%d", &A);

    printf("Enter nombre B: ");
    scanf("%d", &B);
    
    minimum(A,B);

    return 0;
}