#include <stdio.h>

#ifndef PI 
    #define PI 3.14567 //constante 
#endif
//ifndef - diretiva de compila��o

int main () {

    int valor = 5; //VARIÁVEL

    valor = 467;

    printf("O valor e %d\n", valor);

    printf("PI vale %f\n", (2 * PI));

    return 0;
}
