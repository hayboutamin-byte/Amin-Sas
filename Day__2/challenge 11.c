#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    char Jours[] = 
    {
        "lundi","mardi","mercredi","jeudi","vendredi","samedi","demanch"
    };

    srand(time(NULL));
    int randoindex ; rand() % 7;

    printf("jour aleartoire de samin = %s\n",Jours[randoindex]);
}