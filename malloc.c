#include <stdio.h>
#include <stdlib.h>

int main () {

    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor:\n");
    scanf("%d", &qtd); //3 x 4 = 12 bytes**

    p = (int*)malloc(qtd * sizeof(int)); 

    for(int i = 0; i < qtd; i++){
        printf("Informe o valor para a posição %d do vetor: ", i);
        scanf("%d", &qtd);
    }

    for(int i = 0; i < qtd; i++){
        printf("No vetor 'numeros[%d]' esta o valor %d:\n", i, p[i]);

    }

    
    printf("A variável do 'p' vale %d e ocupa %ld bytes de memória.\n", qtd * sizeof(int));

    //liberar a memória 
    free(p);
    p = NULL; // medida de segurança 

    return 0;
}