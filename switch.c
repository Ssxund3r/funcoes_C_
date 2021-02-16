#include <stdio.h>


/*
switch

- usamos o switch em casos onde tenhamos uma estrutura grande ou confusa de if/else/if else

# pseudocódigo

Escola(variavel)
inicio
     caso valor1:
            Instruções
     caso valor2:
            Instruções
      ..
     Caso valorN:
 Fim

Na linguagem C

 switch (variavel){
    case valor1:
        instrucoes;
        break;
    case valor2:
         instrucoes;
         break;
    default:
        instrucoes;
 }

*/

int main (){
        int valor;

        printf("Digite um valor de 1 a 7: ");
        scanf("%d", &valor);

        switch (valor) {
          case  1:
                printf("Domingo\n");
                break;

          case 2:
                printf("Segunda\n");
                break;
          case 3:
                printf("Terca\n");
                break;
          case 4:
                printf("Quarta\n");
          case 5:
                printf("Quinta\n");
          case 6:
                printf("Sexta\n");
          case 7:
                printf("Sabado\n");
          default:
                printf("Valor invalido\n");
                }
return 0;
}




