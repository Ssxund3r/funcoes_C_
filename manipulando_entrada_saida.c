#include <stdio.h>

int main () {
    FILE *arq;

    //open (nome-do-arquivo, forma-de-abertura-do-arquivo);
    // w - abrir o arquivo para escrita (se o arquivo ja existir, sera subcrito com um novo zerado)
    // r - abrir o arquivo para leitura (n�o podemos escrever no arquivo)
    // wa - abrir o arquivo para adi��o de conteudo (se o arquivo j� existir, o cont�udo ser� adicionado nas linhas abaixo)
    arq = fopen("arquivo.txt", "w");

    //sempre que finalizar a manipula��o de um arqivo, devemos fecha-lo
    fclose(arq);

    return 0;
}
