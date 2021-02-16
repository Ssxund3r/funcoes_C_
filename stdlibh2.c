#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atoi () -> converte o número para inteiro 

int main () {
    char valor_s[5];
    int valorI;

    strcpy(valor_s, "4");

    valorI = atoi(valor_s);

    printf("O valor e %d\n", valorI);

    return 0;
}