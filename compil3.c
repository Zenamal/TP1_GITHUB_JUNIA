#include <stdio.h>

int main() {
    int a;
    int b = 10;
    printf("%d\n", b);
    return 0;
}
//./compil3.c: In function 'main':
//./compil3.c:5:5: error: 'b' undeclared (first use in this function)
//     b = 10;
//     ^
//Ici, le type de la variable b n'était pas précisé, empêchant le programme de fonctionner