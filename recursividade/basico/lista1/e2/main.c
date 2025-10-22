/*
Faça um programa que conte de 0 a 4, mas contando de 2 em 2
*/

#include <stdio.h>

#define PASSO 2
#define FIM 4

void contar(int n){
    if(n < FIM + 1){
        printf("%d\n", n);
        contar(n + PASSO);
    }
}

void main(){
    contar(0);
}