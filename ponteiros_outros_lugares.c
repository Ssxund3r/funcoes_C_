#include <stdio.h>

int main () {
     /*   0     1     2     3     4
     *--------------------------------
     * |     |     |     |     |     |
     *--------------------------------
     * int - 4 bytes ->
     * bit 0 / 1
     * byte 00000 0001
     * 0000 00000 0000 0000 0000 0000 0000 0001
     */
     int valores[5] ={1, 2, 3, 4, 5};

     for(int i = 0; i < 5; i++){
         printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
     }

    printf("O array valores possui %ld bytes", sizeof(valores));

    printf("\n valores[0] vale %d e endereco de memoria e %p\n", valores[0], valores [0]);
    printf("\n *(valores) vale %d e endereco de memoria e %p\n", *(valores), *(valores));

    printf("*(valores+1) vale %d e endereco de memoria e %p\n", *(valores+1), *(valores+1));
    printf("*(valores+2) vale %d e endereco de memoria e %p\n", *(valores+2), *(valores+2));
    printf("*(valores+3) vale %d e endereco de memoria e %p\n", *(valores+3), *(valores+3));
    printf("*(valores+4) vale %d e endereco de memoria e %p\n", *(valores+4), *(valores+4));

    return 0;
}
