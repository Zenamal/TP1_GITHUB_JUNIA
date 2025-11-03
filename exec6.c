#include <stdio.h>

int main() {
    char nom[100];
    printf("Nom ? ");
    scanf("%s", nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
//Pas de message d'erreur
// Ici, il faut ralonger la chaîne de caractères pour éviter toute erreure due à la longueur d'un prénom.