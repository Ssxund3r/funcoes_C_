#include <stdio.h>

void quick_sort(int vetor[], int tam){
    //Variaveis auxiliares
    int i, j, grupo, troca;

    //Critério de parada de recursividade!
    if(tam < 2){
        return;
    }else{
        grupo = vetor[tam / 2];
    }

    //fazendo um loop único se comportar com dois
    for( i = 0, j = tam - 1;; i++, j--){

        //Fazermos a movimentação dos elementos no vetor
        while(vetor[i] < grupo){
            i++;
        }
        //Fazermos a movimentação dos elementos no vetor
        while(grupo < vetor[j]){
            j--;
        }
        //Critério de parada do loop
        if(i >= j){
            break;
        }else{
            //Onde ocorrem as trocas
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }
    //Usar a recrusividade para ordenar os grupos
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam - 1);
}

int main () {

     //vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    quick_sort(vetor, 6);

    //Apresentar vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

return 0;
}

