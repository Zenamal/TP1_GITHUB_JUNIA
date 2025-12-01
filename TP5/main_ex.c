#include "ex.h"

#include <stdio.h>
#include <stdlib.h>

int main(){
    int choix = 0;
    int tab[7][0];
    initialiser(tab);
    while (choix != 3){
    afficher_menu();
    choix = LireChoix();
    }
}