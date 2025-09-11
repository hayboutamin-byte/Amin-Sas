#include<stdio.h>
#include<string.h>

struct Date
{
    int jour;
    int mois;
    int annee;
};


int main()
{
    struct Date D;
    struct Date *Ptr = &D;

    Ptr-> jour = 14;
    Ptr-> mois = 6;
    Ptr-> annee = 2006;


    printf("%d/%d/%d",D.jour,D.mois,D.annee);

    return 0;
}
