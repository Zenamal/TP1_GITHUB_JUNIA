#include<stdio.h>
#include<string.h>
#include<math.h>

void afficherMenu()
{
    printf("=== BANQUE - DISTRIBUTEUR ===\n1 - Faire un retrait \n2 - Quitter\n");
        }



int saisir_montant(){
    int montant = 0;
    printf("Montant a retirer : ");
    scanf("%d",&montant);
    return montant;
}

int main(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
}