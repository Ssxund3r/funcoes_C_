#include <stdio.h>

int main () {
    //declaração de uma stirng em C
    char nome[50]; //49 caracteres

    printf("Qual e seu nome? \n");
    gets(nome);

    printf("Seu nome e %s", nome);

 return 0;
}
