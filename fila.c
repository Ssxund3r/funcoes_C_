#include <stdio.h>
#include <stdlib.h>

#define TAMFILA 10

//file/queue
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; // Pr�ximo a ser atendido
int tail = 0; // �ltimo da fila

void lista_elementos(){
    printf("\n====FILA ATUAL====\n");
    for(int i = 0; i < TAMFILA; i++){
        printf("-");
        printf("|%d", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("Tail: %d\n", tail);
    printf("\n\n");
}

void enqueue(){
    int val;
    if(tail < TAMFILA){
        printf("Informe o elemento para adicionar a fila:\n");
        scanf("%d", &val);
        fila[tail] = val;
        tail = tail + 1;
        lista_elementos();
    }else{
        printf("A fila esta cheia...\n");
    }
}

//Segue a sequ�ncia da fila at� o final dela sem realocar ao espa�o vazio anterior do vetor.
/*void dequeue(){
    if(head < tail){
       fila[head] = 0;
       head = head + 1;
       lista_elementos();
    }else{
        printf("A fila esta vazia...\n");
    }
 }*/

//Remove o numero da fila e passa os numero anterior ao pr�ximo vetor da fila.//
void dequeue(){
    if(-1 != tail-1){
       for(int i = 0; i < tail; i++){
         fila[i] = fila[i +1];
       }
        tail = tail - 1;
        head = head + 1;
        fila[tail+1] = 0;
        if(tail == 0){
            head = 0;
        }
        lista_elementos();
    }else{
        printf("A fila esta vazia...\n");
    }
}

void clear(){
    for(int i = 0; i < TAMFILA; i++){
        fila[i] = 0;

    }
    head = 0;
    tail = 0;
}

int main () {
    int opcao = 0;

    do{
        printf("Selecione a opcao: \n\n");
        printf("[1] - Inserir (enqueue):\n");
        printf("[2] - Remover (dequeue):\n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpa a fila: \n");
        printf("[-1] - Sair: \n");
        printf("opcao: \n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("opcao invalida:\n");
        }

    }while(opcao != -1);


    lista_elementos();
    return 0;
}
