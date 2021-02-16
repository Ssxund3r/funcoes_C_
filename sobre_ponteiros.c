#include <stdio.h>

//endere�o de mem�ria como param�tro de entrada
void incrementa (int* valor){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*valor)); //valor
    printf("O endereco de memoria e %d\n", valor);//endere�o de mem�ria

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
    //quando delaramos uma vari�vel, a linguagem C
    //aloca um espa�o em mem�ria para colocar
    //este valor
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e %d\n", &contador);
    //c�pia por valor
    incrementa(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);
    printf("O endereco de memoria e %d\n", &contador);

    return 0;
}
