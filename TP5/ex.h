#ifndef ex_c
#define ex_c

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

void afficher_menu();
int LireChoix();
void initialiser(int tab[7]);
void ajouterConsommation(int tab[7]);
void afficherResume(int tab[7]);
int charger(int tab[7]);
int sauvegarder(int tab[7]);
int humeurbonbon(int tab[7]);
int humeurlegumes(int tab[7]);
int humeurfruits(int tab[7]);
#endif