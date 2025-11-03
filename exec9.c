#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n",a,b); 
    return 0;
}
//Pas de message d'erreur
//Ici, seule la variable b avait été appélée alors qu'il fallait deux appels de variables.