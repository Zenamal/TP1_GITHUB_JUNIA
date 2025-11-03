#include <stdio.h>

int main() {
    int t[3] = {10, 20, 30};
    int i = 2;
    printf("%d\n", t[i]); 
    return 0;
}
//Pas de message d'erreur
//Le problème ici est que la variable i représentant un indice de tableau est négative. Or, en C, les indices nepeuvent être négatifs (contrairement au Python où un indice négatif permet de partir de la fin de la liste). Il faut donc mettre le dernier indice de la liste.