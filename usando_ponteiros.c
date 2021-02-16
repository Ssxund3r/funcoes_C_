#include <stdio.h>

int main () {
    int n;//varial que guarda seu valor na memoria

    //declarando o ponteiro
    int* p;//ponteiro e um valor que aponta para um endereço de memoria

    printf("Informe um numero: ");
    scanf("%d", &n);

    //inicializando o ponteiro
    p = &n;

    printf("O numero informado foi %d\n", n);

    printf("Endereco de memoria: %d\n", &n);

    printf("Endereco do ponteiro: %p\n", p);
    return 0;
}
