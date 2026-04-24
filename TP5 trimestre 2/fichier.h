#ifndef Medic
#define Medic

typedef struct Medoc{
    char nom[50];
    float prix;
    char date_perime[50];
    int vendus;
    int stock;
    char date_fabrique[50];
    int code;
}Medoc;

Medoc plus_cher(Medoc tab[],int taille);
void dicho(int tab[], int taille);

#endif