#include <stdio.h>

int main() {
    int tab[5];
    
    for (int i = 0; i < 5; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
//Pas de message d'erreur
//La valeur max de i est supérieure à la longueur de tab, le programme cherche donc à ajouter quelque chose après la fin du tableau