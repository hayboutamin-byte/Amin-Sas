#include<stdio.h>
#include<string.h>

struct Produit
{
    char nom[50];
    float prix;
    int quantity;
    
};


int main()
{
    struct Produit item [3] ={
        {"Cheeps",6.50,10},
        {"Choclate",9.50,15},
        {"Cookies",7.50,20}
    };

    for (int i = 0; i < 3 ; i++)
    {
        printf("%s | %.2f MAD| %d piece\n",item[i].nom,item[i].prix,item[i].quantity);
    }
    

    


    return 0;
}