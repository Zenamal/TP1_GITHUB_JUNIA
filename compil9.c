#include <stdio.h>

int main() {
    char s[6] = "Hello";
    printf("%s\n", s);
    return 0;
}
//./compil9.c: In function 'main':
//./compil9.c:4:14: warning: initialization makes integer from pointer without a cast [-Wint-conversion]
//     char s = "Hello";
//              ^~~~~~~
//Ici, la longueur de la chaîne de caractère 'char' n'avait pas été précisée