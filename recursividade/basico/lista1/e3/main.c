/*
Faça um programa que conte de 2 a 0
*/

#include <stdio.h>

#define PASSO 1
#define INICIO 2

void contar(int n){
    if(n <= INICIO){
        contar(n + PASSO);
        printf("\n%d", n);
    }
}

void main(){
    contar(0);
}