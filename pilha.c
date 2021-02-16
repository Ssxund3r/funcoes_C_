#include <stdio.h>
#include <stdlib.h>

#define TAMPILHA 10

//Pilha / stack
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
int topo = 0;

void lista_elementos(){
    printf("\n====Pilha Atual===\n");
    for(int i = 0; i <TAMPILHA; i++){
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d", topo);
    printf("\n\n");
}

void push(){
    int val;
    printf("Informe o valor: \n");
    scanf("%d", &val);
    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }else{
        printf("Pilha cheia...\n");
    }
}

void pop(){
    if(topo >= 0){
        pilha[topo-1] = 0;
        topo = topo - 1;
        lista_elementos();
    }else{
        printf("Pilha esta vazia...\n");
    }
}

void clear(){
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
}


int  main () {
    int opcao = 0;

    do{
        printf("Selecione a opcao: \n\n");
        printf("[1] - Inserir: (push)\n");
        printf("[2] -  Remover: (pop)\n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpar a pilha: \n");
        printf("[-1] - Sair:\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                push();
                break;
            case 2:
                pop();
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
                printf("opcao invalida.");
        }

    }while(opcao != -1);

    return 0;
}
