#include <stdio.h>


void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
   //Vetor temporário para o merge
   int temp[50];
   //variaveis auxiliares
   int i, j, k;
   //inicio do primeiro grupo
   i = inicio1;
   //inicio do segundo grupo
   j = inicio2;
   k = 0;

   //Enquanto conter elementos em ambos os grupos...
   while(i <= fim1 && j <= fim2){
    //Faz a ordenação de acordo com cada grupo
       if(vetor[i] < vetor[j]){
            temp[k++] = vetor[i++];
       }else{
            temp[k++] = vetor[j++];
       }
   }

   //Copiar oselementos restantes do primeiro grupo
   while(i <= fim1){
    temp[k++] = vetor[i++];
   }


   //Copiar os elementos restantes do segundo grupo
   while(j <= fim2){
    temp[k++] = vetor[j++];
   }

   //Transfere os elementos do vetor temporário para o original
   for(i = inicio1, j = 0; i <= fim2; i++, j++){
       vetor[i] = temp[j];
   }
}

void merge_sort(int vetor[], int inicio, int tam){

    //Condição de parada da recursão
    if(inicio < tam){
        //calcular o meio do vetor
        int meio = (inicio + tam) / 2;

        //recursão esquerda
        merge_sort(vetor, inicio, meio);

        //recursão direita
        merge_sort(vetor, meio + 1, tam);

        //Faz o merge(junta) com os dois grupos de vetores ordenados
        merge(vetor, inicio, meio, meio + 1, tam);
    }
}

int main () {
    //vetor desordenado
    int vetor[6] = {8, 3, 1, 42, 12, 5};

    //Função de ordenação utilizando Merge sort
    //Vetor - inicio - fim
    merge_sort(vetor, 0, 6 - 1);

    //Apresentar o vetor ordenado
    for(int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
