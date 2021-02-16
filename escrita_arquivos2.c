#include <stdio.h>

int main () {
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt", "a");

    if(arq){
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(fruta, 10, stdin); // stdin -> standart input | entrada padrão
        while(fruta[0] != '0'){
            fputs(fruta, arq);
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(fruta, 10, stdin);
        }
    }else{
        printf("Nao foi possivel criar arquivo.");
    }


    fclose(arq);
    return 0;
}

