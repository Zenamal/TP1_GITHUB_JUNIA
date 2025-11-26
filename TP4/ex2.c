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

int montant_valide(int montant){
    if (montant%5 == 0 && 5<montant<1000){
        return 0;
    }
    else{
        printf("Erreur : montant invalide\n Le montant doit etre entre 5 et 1000, divisible par 5.\n");
        return 1;
    }
    
}

int main(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
}