#include <stdio.h>

int main() {
    int x = 0;
    int y = x + 5;  
    printf("%d\n", y);
    return 0;
}
//Pas de message d'erreur
//Ici, la variable x est définie, mais on ne lui a attribué aucune valeur, empêchant ainsi la valeur de y d'être calculée.