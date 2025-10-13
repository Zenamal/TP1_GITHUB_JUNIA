//Exercice 2
#include <stdio.h>
#include <math.h>
int main(){
float C = 0;
float T = 0;
float N = 0;
printf("Quel est le montant du pret?");
scanf("%f",&C);
printf("Quel est le taux d'interet annuel?");
scanf("%f",&T);
printf("Quel est la duree un pret en annees?");
scanf("%f",&N);
float mensualite = 0;
mensualite = (C*(T/12))/(1-(pow((1+(T/12)),(-N*12))));
printf("Les mensualites sont donc de %f",mensualite);
return 0;
}