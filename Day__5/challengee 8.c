#include<stdio.h>                                                                                                               


int est_pair(int n)
{
    if (n % 2 == 0) {
        printf("%d est pair\n", n);
    } else {
        printf("%d est impair\n", n);
    }
}



int main()
{
    int n;

    printf("Enter nombre A: ");
    scanf("%d", &n);
    
    est_pair(n);
}