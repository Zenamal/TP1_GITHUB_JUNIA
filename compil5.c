#include <stdio.h>

int main() {
    char c = 'A';
    printf("c = %c\n", c);
    return 0;
}
//Pas de message d'erreur
//Ici, lorsque la variable c est appellée dans le printf, elle est appellée comme une chaîne de caractères à plusieurs caractères alors qu'elle n'est composée que d'un caractère.