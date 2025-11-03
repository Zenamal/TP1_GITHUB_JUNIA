#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
//Boucle infinie
//La valeur de i ne change jamais, empêchant la boucle de se terminer