/*
Faça um programa que peça 10 valores e, depois, apresente o maior valor.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 10

void ler(int *num){
    printf("-> ");
    scanf("%d", num);
}

void calcMaior(int *ptr, int *maior){
    *maior = *(ptr+0);
    for(int i = 1; i < QTD; i++){
        if(*maior < *(ptr + i)){
            *maior = *(ptr + i);
        }
    }
}

void apresenta(int *maior){
    printf("Maior valor: %d", *maior);
}

void main(){
    int *numerecos, *maior;

    numerecos = (int*)(malloc(QTD * sizeof(int)));
    maior = (int*)(malloc(sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(numerecos + i);
    }

    calcMaior(numerecos, maior);
    apresenta(maior);
}