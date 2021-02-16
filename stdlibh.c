#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atof() // converte uma string para double 

int main () {
    char valor_s[15];
    double valorD;

    strcpy(valor_s, "4.5"); // "4.a" -> iria converter para 4.00 

    valorD = atof (valor_s);

    printf("O valor e %.2f\n", valorD);

    return 0;
}
