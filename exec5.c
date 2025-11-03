#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0';
    printf("%s\n", s); 
    return 0;
}
//Pas de message d'erreur
//Ici, il faut rajouter un dernier caractère car la variable est censée contenir 5 caractères, mais n'en contient que 4