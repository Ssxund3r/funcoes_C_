#include <stdio.h>
#include <stdlib.h>
//Aritmética de inteiros 
//abs() -> valor absoluto 
int main () {
    int valor_a, valor_b;

    valor_a = abs(5);
    printf("O valor absoluto de 5 e %d\n", valor_a);

    valor_b = abs(-10);
    printf("O valor absoluto de -10 e %d\n", valor_b);

    return 0;
}