#include <stdio.h>
#include <stdlib.h>
//rand() -> gera números aleatório 
int main () {
    //gerar 6 números entre 0 e 60...
    for(int i = 0; i < 6; i++){
        printf("%d\n", rand() % 61);
    }

    return 0;
}