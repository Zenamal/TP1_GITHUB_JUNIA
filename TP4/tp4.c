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
int saisirNotes(int nbreEleve,float tab[30][4]){
    printf("Saisir des notes pour %d eleves et 3 controles\n",nbreEleve);
    for(int i = 1; i <= nbreEleve;i++)
    {printf("Eleve %d : \n",i);
        for(int j = 1; j <= 3; j++)
        {
            float note = 0;
            printf("\nNote du controle %d (0 a 20) : ",j);
            scanf("%f",&tab[i-1][j]);
            if(tab[i-1][j] > 20){
                printf("Valeur invalide \n");
                j = j - 1;
            }
        }
        tab[i-1][0]=i;
    }
}
int afficherNotes(int eleves,float tab[30][4]){
    printf("Tableau des notes\n");
    printf("Eleve\t C1\t C2\t C3\n");
    for (int i=0;i<eleves;i++){
        for (int j=0;j<4;j++)
        {
            printf("%.2f\t",tab[i][j]);
        }
        printf("\n");
    }
}
float calculerMoyenneEleve(int indiceEleve,float tab[30][4])
{
    float moyenne = (tab[indiceEleve - 1][1] +tab[indiceEleve - 1][2] +tab[indiceEleve - 1][3])/3;
    return moyenne;
}

float calculerMoyenneGenerale(int eleves,float tab[30][4])
{
    float moyenneG=0;
    for (int i = 0;i<eleves;i++)
    {
        moyenneG = moyenneG + calculerMoyenneEleve(i+1,tab);
    }
    moyenneG = moyenneG/eleves;
    return moyenneG;
}

float trouverMeilleureNoteControle(int indice,int eleves,float tab[30][4]){
    float max = tab[0][indice];
    for (int j=0; j<eleves;j++)
        {
            if (tab[j][indice]>max)
            {
                max = tab[j][indice];
            }
        }
    return max;
}

float afficherMeilleuresNotes(int eleves,float tab[30][4])
{
    for (int i=1;i<=3;i++)
    {
        printf("Meilleure note au controle %d : %.2f\n",i,trouverMeilleureNoteControle(i,eleves,tab));
    }
}
int main(){
afficherMenu();
lireChoix();
int eleve = saisirNombreEleves();
float tab[eleve][4];
saisirNotes(eleve,tab);
afficherNotes(eleve,tab);
printf("%.2f\n",calculerMoyenneGenerale(eleve,tab));
afficherMeilleuresNotes(eleve,tab);
}