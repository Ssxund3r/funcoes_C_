#include <stdio.h>

//Funções de entrada e saída:

//Acesso a arquivos:

//fclose()

//ffflush() | limpar o buffer -> corrige um bug no windows + C + eclipse.

//fopen ()

//Entradas e saídas formatadas 
//fscanf()
//printf()
//scanf()
//fputs()
//getchar()
//fgets()

// Tratamento de erros 

//feof()

// Tipos e macros 

// FILE 
// EOF 
// NULL 



int main () {
    int num1, num2, soma; 

    printf("Informe o num1:\n");
    fflush(stdout); //Exemplo 
    scanf("%d", &num1);

    printf("Informe o num2:\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d com %d e %d\n", soma);

    return 0;
}