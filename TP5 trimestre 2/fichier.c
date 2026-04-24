#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include "fichier.h"
//Exercice 1
void dicho(int tab[], int taille){
    int n = taille - 1;
    int debut = 0;
    int fin = n;
    bool trouve = false;
    int val;
    int mid;
    printf("Quelle valeur recherchez vous?\n");
    scanf("%d",&val);
    while(debut <= fin && trouve != true){
        int mid = (debut + fin)/2;
        if (tab[mid]==val){
            trouve = true;
        }
        else{
            if(val > mid){
                debut = mid + 1;
            }
            else{
                fin = mid - 1;
            }
        }
    }
    if (trouve == true){
        printf("La valeur %d est dans le tableau a la position %d",val,mid);
    }
    else{
        printf("La valeur %d n'est pas dans le tableau");
    }
}

Medoc plus_cher(Medoc tab[],int taille){
    Medoc max = tab[0];
    for(int i = 1;i < taille;i++){
        if(tab[i].prix>max.prix){
            max=tab[i];
        }
    }

    return max;
}

float tauxMedicamentsVendus(Medoc tab[], int n) {
    int total_vendus = 0;
    int total_stock = 0;

    for (int i = 0; i < n; i++) {
        total_vendus += tab[i].vendus;
        total_stock += tab[i].stock;
    }

    if ((total_vendus + total_stock) == 0) {
        return 0;
    }

    return (total_vendus / (total_vendus + total_stock)) * 100;
}