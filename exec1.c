#include <stdio.h>

int main() {
    int a = 2;
    int b = 1;
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
//Pas de message d'erreur
//On ne peut pas diviser par 0