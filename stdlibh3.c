#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atol() -> converte string para long float 

int main () {
    char valorS[500];
    double valorLi;

    strcpy(valorS, "49999293999236993");

    valorLi = atol(valorS);

    printf("O valor é %lf", valorLi);

    return 0;
}