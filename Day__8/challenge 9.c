#include <stdio.h>
#include <string.h>
 
struct compt {
    char nom[50];
    float solde;
};


struct compt Ajouter_Montant(struct compt compt1, float Montant) {
    compt1.solde += Montant;
    return compt1;
}

int main() {
    struct compt compt1;

    printf("Entrer ton nom: ");
    fgets(compt1.nom, sizeof(compt1.nom), stdin);
    compt1.nom[strcspn(compt1.nom, "\n")] = 0;

    compt1.solde = 100.00;

    printf("Compte de %s.\n", compt1.nom);
    printf("Solde initial est: %.2f.\n", compt1.solde);

    float montant;

    printf("Entrer un montant: ");
    scanf("%f", &montant);  

    compt1 = Ajouter_Montant(compt1, montant);

    printf("Nouveau solde est: %.2f.\n", compt1.solde);

    return 0;
}
