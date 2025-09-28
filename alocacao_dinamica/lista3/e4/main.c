/*
Faça um programa que peça 6 números inteiros e, depois,
apresente-os na tela na forma invertida ao que foi digitado. Exemplo,
se foi digitado 1 3 2 4 5 9, deve ser apresentado 9 5 4 2 3 1.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 6

void ler(int *n){
    printf("\nDigite um número: ");
    scanf("%d", n);
}


void imprime(int *num){
    printf("%d\t", *num);
}

void main(){
    int *nums;

    nums = (int*)(malloc(QTD * sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(nums + i);
    }

    for(int i = 0; i < QTD; i++){
        imprime(nums + i);
    }

    printf("\n\n");

    for(int i = QTD - 1; i >= 0; i--){
        imprime(nums + i);
    }
}