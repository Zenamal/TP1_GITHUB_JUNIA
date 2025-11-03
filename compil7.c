#include <stdio.h>

// ici le compilateur ne dit malheureusement rien mais il devrait,
// executer pour essayer de comprendre ce qu'il se passe 
int main() {
    int tableau[5];
    int i = 12;
    for (int j = 0; j < 6; j++)
    {
        tableau[j] = 1;
    }
    printf("OK %d\n", tableau[5]);
    return 0;
}
//Pas de message d'erreur
//Ici, la valeur maximale de la boucle "for" était trop basse, faisant que la dernière valeur du tableau (celle que l'on appelle), n'était pas la valeur désirée