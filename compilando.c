#include <stdio.h>

int main () {
    int qtd, soma;

    printf("Quantos numeros voce quer somar?\n");
    scanf("%d", &qtd);

    soma = 0;

    for(int i = 0; i < qtd; i++){
        soma = soma + i * 2 + 3;
    }

    printf("A soma é %d\n", soma);

    return 0;
}