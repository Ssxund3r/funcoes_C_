#include <stdio.h>
//prot�tipo de fun��o
/*
assinatrura das fun��es
*
* - tipo de retorno
* - nome
* - parametros de entrada (opcionais)
*/
int soma (int num1, int num2);

void mensagem ();

int main () {
    int n1, n2, ret;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    ret = soma(n1, n2);

    printf("A soma de %d com %d e %d\n", n1, n2, ret);

    mensagem ();
    return 0;
}

int soma(int num1, int num2){
        return num1 + num2;
}

void mensagem (){
    printf("Bem-vindo");
}
