//Exercice 2
#include <stdio.h>
int main(){
int C = 0;
int T = 0;
int N = 0;
printf("Quel est le montant du pret?");
scanf("%d",&C);
printf("Quel est le taux d'interet annuel");
scanf("%d",&C);
printf("Quel est la duree un pret en annees?");
scanf("%d",&C);
float mensualite = (C*(T/12))/(1-(1+(T/12))^(-N/12));
printf("Les mensualites sont donc de %d",mensualite);
}