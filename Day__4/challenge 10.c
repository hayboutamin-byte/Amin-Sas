#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int n;
    printf("enter un mot de passe de longueur: ");
    scanf("%d",&n);

    char chars[] = "ABCDEFGHIJKLMNOPQURSTVWXYZabcdefghijklmnopqurstvwxyz123456789";
    char chars_size = sizeof(chars) - 1;

    srand(time(NULL));

    printf("Mot de passe genere : ");
    for (int i = 0; i < n ; i++)
    {
        int index = rand () % chars_size;
        printf("%d",chars[index]);
        
    }
    printf("\n");

}