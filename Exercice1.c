#include <stdio.h>
//Exercice 1
int main(){
int original = 0;
scanf("%d",&original);
int seconde = original;
int heures = seconde/3600;
seconde = seconde - (3600*heures);
int minutes = seconde/60;
seconde = seconde - (60*minutes);
printf("%d secondes = %d heures, %d minutes, %d secondes",original,heures,minutes,seconde);
}

