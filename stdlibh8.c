#include <stdio.h>
#include <stdlib.h>
//div() -> divisão inteiro 
int main () {
    div_t saida;

    saida = div(27, 4); // 27 / 4
    printf("O quociente de (27/4) e %d\n", saida.quot);
    printf("O resto de (24/4) e %d\n", saida.rem);

    saida = div(27, 3); // 27 / 3
    printf("O quociente de (27/3) e %d\n", saida.quot);
    printf("O resto de (24/3) e %d\n", saida.rem);


    return 0;
}