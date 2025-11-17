#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int n = 0;
    printf("Choisissez la taille de l'etoile (Recommande de 5 a 10)");
    scanf("%d",&n);
    int width = n*n;
    int max_height = 3*n -1;
    char img[100][100];
    for(int i = 0;i < 100;i++)
    {
        for(int j = 0; j < 100;j++)
        {
            img[i][j]=' ';
        }
    }
    int mid=width/2;
    int j = 50;
    for(int i = 0; i< n; i++)
    {
        img[i][j]='A';
        img[i][100-j]='A';
        int k=j+1;
        for(int k = j;k<100-j;k++)
        {
            img[i][k]='S';
        }
        j = j-1;
        if(i==n-1)
        {
            int x=0;
            int y=100;
            while(x!=j)
            {
                img[i][x]='_';
                img[i][y]='_';
                x=x+1;
                y=y-1;
            }
        }
    }
    for(int i=0;i<100;i++)
    {
        for(int j = 0; j < 100;j++)
        {
            printf("%c",img[i][j]);
        }
        printf("\n");
    }
}