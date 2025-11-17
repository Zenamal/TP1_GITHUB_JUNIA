#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int n = 0;
    printf("Choisissez la taille de l'etoile (Recommande de 5 a 10)");
    scanf("%d",&n);
    int width = n*n;
    int max_height = 3*n -1;
    char img[20][20];
    for(int i = 0;i < 20;i++)
    {
        for(int j = 0; j < 20;j++)
        {
            img[i][j]='a';
        }
    }
    for(int i=0;i<20;i++)
    {
        for(int j = 0; j < 20;j++)
        {
            printf("%c",img[i][j]);
        }
        printf("\n");
    }
}