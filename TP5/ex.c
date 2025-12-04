#include "ex.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

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
    int humeur_b = humeurbonbon(tab);
    int humeur_l = humeurlegumes(tab);
    int humeur_f = humeurfruits(tab);
    printf("========== Resume du jour ==========\n");
    printf("Eau : %d 💧\n",tab[0]);
    printf("Cafe : %d ☕\n",tab[1]);
    if (humeur_b==0){
        printf("Bonbons : %d 🍬 😇\n",tab[2]);
    }
    else if (humeur_b==1){
        printf("Bonbons : %d 🍬 🙂\n",tab[2]);
    }
    else if (humeur_b==2){
        printf("Bonbons : %d 🍬 😕\n",tab[2]);
    }
    else if (humeur_b==3){
        printf("Bonbons : %d 🍬 👿\n",tab[2]);
    }
    printf("Gateaux : %d 🍰\n",tab[3]);
    if (humeur_l==3){
        printf("Legumes : %d 🥦 😇\n",tab[4]);
    }
    else if (humeur_l==2){
        printf("Legumes : %d 🥦 🙂\n",tab[4]);
    }
    else if (humeur_l==1){
        printf("Legumes : %d 🥦 😕\n",tab[4]);
    }
    else if (humeur_l==0){
        printf("Legumes : %d 🥦 👿\n",tab[4]);
    }
    if (humeur_f==3){
        printf("Fruits : %d 🍎 😇\n",tab[5]);
    }
    else if (humeur_f==2){
        printf("Fruits : %d 🍎 🙂\n",tab[5]);
    }
    else if (humeur_f==1){
        printf("Fruits : %d 🍎 😕\n",tab[5]);
    }
    else if (humeur_f==0){
        printf("Fruits : %d 🍎 👿\n",tab[5]);
    }
    printf("Proteines : %d 🍗\n",tab[6]);
    printf("====================================\n");
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

int humeurbonbon(int tab[7]){
    int humeur = 0;
    if (tab[2]<=3){
        humeur == 0;
    }
    else if (3<tab[2]&&tab[2]<=7){
        humeur=1;
    }
    else if (7<tab[2]&&tab[2]<=12){
        humeur=2;
    }
    else{
        humeur = 3;
    }
    return humeur;
}

int humeurlegumes(int tab[7]){
    int humeur = 0;
    if (tab[4] <= 5){
        humeur = 0;
    }
    else if (5<tab[4]&&tab[4]<=9){
        humeur=1;
    }
    else if (9<tab[4]&&tab[4]<=15){
        humeur=2;
    }
    else{
        humeur = 3;
    }
    return humeur;
}

int humeurfruits(int tab[7]){
    int humeur = 0;
    if (tab[5]<1){
        humeur = 0;
    }
    else if (0<tab[5]&&tab[5]<=2){
        humeur=1;
    }
    else if (3<tab[5]&&tab[5]<=5){
        humeur=2;
    }
    else{
        humeur = 3;
    }
    return humeur;
}