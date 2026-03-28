#pragma once
#ifndef PARC
#define PARC
#include <stdlib.h>
#include <stdio.h>


typedef struct Groupe
{
	int taille;
	struct Groupe * suivant;
}Groupe;

typedef struct
{
	Groupe* premier;
	Groupe* dernier;
}File;

File* creerFile();
Groupe* creerGroupe(int taille);
void ajouterGroupeDansFile(Groupe* g_ajout, File* file);
void deplacerPremierENDernier(File* file);
void afficherFile(File* f);
long long int gains(File* file, const int C, const int L, const int N);

#endif // !PARC
