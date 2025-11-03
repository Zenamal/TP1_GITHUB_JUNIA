#include <stdio.h>

int main() {
    int x = 10;
    printf("x = %d\n", x);
    return 0;
}
//./compil8.c: In function 'main':
//./compil8.c:5:24: error: 'y' undeclared (first use in this function)
//     printf("x = %d\n", y);
//                        ^
//./compil8.c:5:24: note: each undeclared identifier is reported only once for each function it appears in
//Ici, une variable y inexistante a été appelée à la place de la variable x