/*
Faça um programa que peça 5 números inteiros e, no final, troque
a ordem do primeiro número com a do último número digitado.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

void ler(int *n){
    printf("\nDigite um número: ");
    scanf("%d", n);
}

void troca(int *nums, int *aux){
    *aux = *(nums + 0);
    *(nums + 0) = *(nums + QTD - 1);
    *(nums + QTD - 1) = *aux;
}

void imprime(int *num){
    printf("%d\t", *num);
}

void main(){
    int *nums, *nums_aux;

    nums = (int*)(malloc(QTD * sizeof(int)));
    nums_aux = (int*)(malloc(sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(nums + i);
    }

    for(int i = 0; i < QTD; i++){
        imprime(nums + i);
    }

    troca(nums, nums_aux);
    printf("\n\n");

    for(int i = 0; i < QTD; i++){
        imprime(nums + i);
    }
}