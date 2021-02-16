#include <stdio.h>

//endereço de memória como paramêtro de entrada
void incrementa (int* valor){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*valor)); //valor
    printf("O endereco de memoria e %d\n", valor);//endereço de memória

    printf("Depois de incrementar.\n");
    // valor = valor + 1;
    // valor = valor - 1;
    //valor++; incrementa depois
    //valor--;
    //++valor; increment na hora
    //--valor;
    printf("O contador vale %d\n", ++(*valor));
    printf("O endereco de memoria e %d\n", valor);

}

int main (){
    //quando delaramos uma variável, a linguagem C
    //aloca um espaço em memória para colocar
    //este valor
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e %d\n", &contador);
    //cópia por valor
    incrementa(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e %d\n", &contador);

    return 0;
}
