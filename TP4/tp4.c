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
    return eleve;
    
}
int saisirNotes(int nbreEleve,float tab[30][3]){
    printf("Saisir des notes pour %d eleves et 3 controles\n",nbreEleve);
    for(int i = 1; i <= nbreEleve;i++)
    {printf("Eleve %d : ",i);
        for(int j = 1; j <= 3; j++)
        {
            float note = 0;
            printf("\nNote du controle %d (0 a 20) : ",j);
            scanf("%f",&note);
            if(note > 20){
                printf("Valeur invalide \n");
                j = j - 1;
            tab[i-1][j] = note;
            }
        }
    }
}
int main(){
afficherMenu();
lireChoix();
int eleve = saisirNombreEleves();
float tab[eleve][3];
saisirNotes(eleve,tab);
}