#include "ex.h"

#include <stdio.h>
#include <stdlib.h>

void afficher_menu(){
    printf("=============================\n   Suivi de consommation\n=============================\n1. Ajouter une consommation\n2. Afficher le resume du jour\n3. Sauvegarder et quitter\n");
}

int LireChoix(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    return choix;
}

void initaliser(int tab[7][1]){
    for (int i = 0; i<7;i++){
        tab[i][0]=0;
    }
}

void ajouterConsommation(int tab[7][1]){
    printf("Quelle categorie voulez-vous modifier?\n1. Eau\n2. Cafe\n3. Bonbons\n4. Gateaux\n5. Legumes\n6. Fruits\n7. Proteines ");
    int choix = 0;
    choix = LireChoix();
    int ajout = 0;
    printf("Combien d'unites ajouter? ");
    scanf("%d",&ajout);
    switch(choix)
    tab[choix-1][0]=tab[choix-1][0] + ajout;
    printf("Consommation mise à jour");
}

void afficherResume(int tab[7][1]){
    print("========== Resume du jour ==========\nEau : %d\nCafe : %d\nBonbons %d\nGateaux : %d\nLegumes : %d\nFruits : %d\nProteines : %d\n====================================",tab[0][0],tab[1][0],tab[2][0],tab[3][0],tab[4][0],tab[5][0],tab[6][0]);
}