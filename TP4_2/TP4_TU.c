#include "TP4_TU.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int estPair(int n) {
    return n % 2 == 0;
}

int max2(int a, int b) {
    if (a > b) {
        return a;
    }
    else if (a < b) {
        return b;
    }
    return a;
}

int factorielle(int n) {
    int resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    if (n < 0) {
        return NULL;
    }
    return resultat;
}

int contientMajuscule(const char* chaine) {
    int i = 0;
    if (chaine == NULL) {
        return 0;
    }
    while (chaine[i] != '\0') {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            return 1;
        }
        i++;
    }
    return 0;
}

int divisionExacte(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a % b == 0;
}

int sommeTableau(const int tab[], int taille) {
    if (taille <= 0 || tab == NULL) {
        return 0;
    }
    int somme = 0;
    for (int i = 0; i <= taille; i++) {
        somme += tab[i];
    }
    return somme;
}
