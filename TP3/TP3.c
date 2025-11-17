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
    for(int i = 0;i < width;i++)
    {
        for(int j = 0; j < width;j++)
        {
            img[i][j]=' ';
        }
    }
    int mid=width/2;
    int j = mid;
    for(int i = 0; i< n; i++)
    {
        img[i][j]='A';
        img[i][width-j]='A';
        int k=j+1;
        for(int k = j+1;k<width-j;k++)
        {
            img[i][k]='S';
        }
        j = j-1;
        if(i==n-1)
        {
            int x=0;
            int y=width-1;
            while(x!=j)
            {
                img[i][x]='_';
                img[i][y]='_';
                x=x+1;
                y=y-1;
            }
        }
    }
    int x = 0;
    for(int i=n;i<max_height;i++)
    {img[i][x]='\"';
    img[i][width-x]='\"';
    img[i][x+1]='S';
    img[i][width-x-1]='S';
    if(i!=n+1){
        img[i][x+1]='V';
        img[i][width-x-1]='V';
    }
    int y = x+2;
        while(y<=mid)
        {
            img[i][y]='S';
            img[i][width-y]='S';
            y++;
        }
    x++;
    }
    for(int i=0;i<width;i++)
    {
        for(int j = 0; j < width;j++)
        {
            printf("%c",img[i][j]);
        }
        printf("\n");
    }
}