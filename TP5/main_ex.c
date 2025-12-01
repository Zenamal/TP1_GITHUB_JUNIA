#include "ex.h"

#include <stdio.h>
#include <stdlib.h>

int main(){
    int choix = 0;
    int tab[7];
    initialiser(tab);
    while (choix != 3){
    afficher_menu();
    choix = LireChoix();
    if (choix == 1){
        ajouterConsommation(tab);
    }
    else if (choix == 2){
        afficherResume(tab);
    }
    }
}