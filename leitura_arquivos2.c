#include <stdio.h>

int main (){
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo2.txt", "r");

    if(arq){
       while(!feof(arq));{
       resultado = fgets(nome, 10, arq);
       printf("resultado: %d\n", resultado);
        printf("%s", nome);
       }
    }else{
       printf("Nao achei o arquivo:");
    }

    fclose(arq);
    return 0;
}
