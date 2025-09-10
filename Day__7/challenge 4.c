#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "amin";
    char str2[] = "amine";

    if (strcmp(str1,str2) == 0)
    {
        printf("the same things");
    }
    else
    {
        printf("its not the same things");
    }
    
    
}