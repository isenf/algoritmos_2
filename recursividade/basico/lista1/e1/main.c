/*
Faça um programa que conte de 0 a 2
*/

#include <stdio.h>

#define PASSO 1
#define FIM 2

void contar(int n){
    if(n < FIM + 1){
        printf("%d\n", n);
        contar(n + PASSO);
    }
}

void main(){
    contar(0);
}