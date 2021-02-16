#include <stdio.h>
#include <string.h>

//Recursividade -> É o ato de uma função
//chamar a si mesma.
//É importante que a função recursiva tenha uma condição de parada...
// 5 primeiros números da sequência fibonacci.
// 1 1 2 3 5 sequencia fibonacci 

int fib(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }
    
    return fib(n - 1) + fib( n - 2);
}

int main () {

    int qtd;

    printf("Informe o tamanho da sequência fibonacci:\n");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        printf("%d ", fib(i + 1));
    }

    return 0;
}