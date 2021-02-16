#include <stdio.h>
/*
Tipos de dados

Tipos Numéricos:
- Inteiros;
- Reias;
*/
int main (){
    //int num1 , num2; //7,890....

    //reais
    float media, num1, num2; // 23.4, 1.23, ...9999999
    //double outra media //23.4, 1.23, ... 99999999999

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);

    printf("Digite a segunda nota");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;

    printf("MEDIA = %.2f\n", media);

 return 0;
}
