#include <stdio.h>
/*
Tipos de  dados

Tipos Alfanum�ricos:
- caracteres;
- String;

*Na linguagem C, n�o existe o tipo de dado String.

Ex: String
"asdasdasdsadas asdas asdad asdsad asd";

Ex: caractere
's';
*/
int main (){
    char opcao;
    printf("Informe uma op��o:\n");
    printf("a - saldo da conta.\n");
    printf("b - Extrato da conta.\n");
    printf("c - Limite da conta.\n");
    scanf("%c", &opcao);

    if(opcao == 'a'){
       printf("Seu saldo e... \n");
    }else if(opcao == 'b'){
        printf("Extrato da conta... \n");
    } else if (opcao == 'c'){
        printf("Seu limite �... \n");
    }else{
        printf("Opcao desconhecida.... \n");
    }
      for (int  i = 97; i < 122; i++){
         printf("%c\n", i);
      }

 return 0;
}
