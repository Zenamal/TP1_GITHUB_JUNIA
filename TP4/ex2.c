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

void calcul_distribution(int montant){
    printf("%d\n",montant);
    int gros_b = 0;
    int moyen_b = 0;
    int petit_b = 0;
    while((montant - 50)>0){
        gros_b++;
        montant = montant - 50;
        printf("%d\n",gros_b);
    }
    while((montant - 20)>0){
        moyen_b++;
        montant = montant - 20;
    }
    while((montant - 5)>0){
        petit_b++;
        montant = montant - 5;
    }
    printf("Billets distribues : \n%d Billets de 50 euros\n%d Billets de 20 euros\n%d Billets de 5 euros\n");
}

int main(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
}