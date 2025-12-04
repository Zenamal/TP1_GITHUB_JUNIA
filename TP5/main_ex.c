#include "ex.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int choix = 0;
    int tab[7];
    int resultat = charger(tab);
    if (resultat==0){
        printf("Aucune sauvegarde trouvee\n");
        initialiser(tab);}
    while (choix != 3){
    afficher_menu();
    choix = LireChoix();
    if (choix == 1){
        ajouterConsommation(tab);
    }
    else if (choix == 2){
        afficherResume(tab);
    }
    else if (choix == 3){
        sauvegarder(tab);
    }
    else{
        printf("Ce choix n'existe pas. Reessayez");
    }
    }
}