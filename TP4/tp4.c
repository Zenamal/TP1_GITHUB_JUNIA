#include<stdio.h>
#include<string.h>
#include<math.h>

void afficherMenu()
{
    printf("=====Gestion de Notes======\n1. Saisir le nombre d'eleves\n2.Saisir les notes des eleves\n3.Afficher toutes les notes\n4.Afficher la moyenne d'un eleve\n5.Afficher la moyenne generale\n5.Afficher la meilleure note de chaque controle\n0.Quitter\n");
}
int lireChoix()
{
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    return choix;
}
int saisirNombreEleves()
{
    int eleve = 0;
    while(eleve == 0 || eleve > 30)
    {printf("Entrez le nombre d'eleves (1 a 30) : ");
    scanf("%d",&eleve);
    if (eleve > 30){
        printf("Valeur invalide\n");
    }}
}
int main()
{
afficherMenu();
lireChoix();
saisirNombreEleves();
}