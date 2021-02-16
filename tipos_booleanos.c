#include <stdio.h>
//Tipos de dados

//Booleanos (Verdadeiros | Falsos) true / false
/*
Na linguagem C, não existe um tipo de dado boolean

Mas....

A linguagem C, reconhece o valor 0 como falso (false)
e qualquer valor diferente de 0 como verdadeiro (true)
*/
int main () {
    int booleano = 1;
    if(booleano){
    printf("Verdadeiro...");
    }else{
        printf("falso...");
    }

return 0;
}
