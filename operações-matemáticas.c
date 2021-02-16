#include <stdio.h>
#include <math.h>
//Operações matemáticas
/*
Soma +
Subtrair -
Multiplicar *
Dividir /
Elevar ao quadrado  x ** 2
Módulo (resto da divisão de x por y) %
*/
int main(){
     int num1, num2;
     float res;

     printf("Informe o num1: ");
     scanf("%d", &num1);

     printf("Informe o num2:");
     scanf("%d", &num2);

     //soma
     res = num1 + num2;
     printf("A soma e %d\n", (int)res);

     //subtrair
     res = num1, num2;
     printf("A subtracao e %d\n", (int)res);

     //Multiplicar
     res = num1 * num2;
     printf("A multiplicacao e %d\n", (int)res);

     //dividir
     res = (float)num1 /(float) num2;
     printf("A divisao e %f\n",(float) res);

      //Elevar ao quadrado
      res = num1 * num1;
      printf("O numero ao quadrado e %d\n", (int)res);

      //modulo (verificando se o num1 é par ou impar
      if(num1 % 2 == 0){
        printf("E par %d\n", num1);
      }else{
        printf("e impar %d\n", num1);
      }

 return 0;
}
