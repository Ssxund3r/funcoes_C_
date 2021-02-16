#include <stdio.h>

int main () {
    printf("Ola...\n");
    mensagem();
    //int retorno = soma(4,6);
    printf("\nRetorno =  %d", soma(4, 6));
    char jinjo = 'j';
    proximo_char(jinjo);
    return 0;
}

//Usando funções
 void mensagem (){
    printf("Bem-vindo...");
 }

// main -> principal
int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}

void proximo_char(char caractere){
    printf("%c", caractere+1);
}

