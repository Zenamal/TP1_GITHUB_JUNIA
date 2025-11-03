#include <stdio.h>

int main() {
    float distance_km = 100;
    float vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; 
    float minutes = temps * 60;
    printf("minutes = %d\n", minutes); 
    return 0;
}
//Pas de message d'erreur
//Ici, il est mieux d'utiliser d'utiliser des variables de type "float" plutôt que des variables de type "int" car les divisions peuvent facilement tomber sur des nombres à virgule