#include <stdio.h>
#include <stdlib.h>

int main () {

    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)calloc(qtd, sizeof(int));

    if(p){
        printf("A variavel 'p' ocupa %ld bytes de memoria.\n", qtd *sizeof(int));

        printf("Informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);

        p = (int*)realloc(p, qtd * sizeof(int));

        if(p){
            printf("A variavel 'p' ocupa %ld bytes de memoria.\n", qtd *sizeof(int));
        }else{
            printf("Erro: memoria insuficiente!!!");
        }
    }else{
        printf("Erro: memoria insuficiente!!!");
    }

    free(p);
    p = NULL;

    return 0;
}

