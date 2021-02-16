#include <stdio.h>
#include <stdlib.h>

void shell_sort(int vetor[], int tam){
    //Variavel auxiliar
    int grupo = 1;

    //gerar o tamanho do grupo de acordo com tamanho do vetor
    while(grupo < tam){
        grupo = 3 * grupo + 1;
    }

    //Varrer o vetor enquanto houver grupos para ordenar
    while(grupo > 1){
        //Dividir o grupo em 3 partes
        grupo /= 3;
        //Varremos cada grupo
        for(int i = grupo; i < tam; i++){
            int troca = vetor[i];
            int j = i - grupo;
            //Realiza a troca
            while(j >= 0 && troca < vetor[j]){
                vetor[j + grupo] = vetor[j];
                j -= grupo;
            }
            //Realiza a troca
            vetor[j + grupo] = troca;
        }
    }
}

int main () {

     //vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    shell_sort(vetor, 6);

    //Apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

return 0;
}
