#include "ex.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void afficher_menu(){
    printf("=============================\n   Suivi de consommation\n=============================\n1. Ajouter une consommation\n2. Afficher le resume du jour\n3. Sauvegarder et quitter\n");
}

int LireChoix(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    return choix;
}

void initialiser(int tab[7]){
    for (int i = 0; i<7;i++){
        tab[i]=0;
    }
}

void ajouterConsommation(int tab[7]){
    printf("Quelle categorie voulez-vous modifier?\n1. Eau\n2. Cafe\n3. Bonbons\n4. Gateaux\n5. Legumes\n6. Fruits\n7. Proteines\n");
    int choix = 0;
    choix = LireChoix();
    int ajout = 0;
    printf("Combien d'unites ajouter? ");
    scanf("%d",&ajout);
    tab[choix-1]=tab[choix-1] + ajout;
    printf("Consommation mise a jour\n");
}

void afficherResume(int tab[7]){
    printf("========== Resume du jour ==========\nEau : %d\nCafe : %d\nBonbons %d\nGateaux : %d\nLegumes : %d\nFruits : %d\nProteines : %d\n====================================",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]);
}

int charger(int tab[7]){
    FILE * file = fopen("consomation.txt","r");
    if (file == NULL){
        printf("Le chargement est impossible\n");
        return 0;
    }
    fscanf(file,"%d %d %d %d %d %d %d",&tab[0],&tab[1],&tab[2],&tab[3],&tab[4],&tab[5],&tab[6]);
    fclose(file);
}

int sauvegarder(int tab[7]){
    FILE * file = fopen("consomation.txt","w+");
    if (file == NULL){
        printf("La sauvegarde est impossible\n");
        return 0;
    }
    fprintf(file,"%d %d %d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]);
    fclose(file);
}
