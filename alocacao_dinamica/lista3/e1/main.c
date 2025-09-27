/*
Faça um programa que peça 5 números reais. Depois, o programa
deve apresentar o número maior.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

void ler(int *n){
    printf("\nDigite um número: ");
    scanf("%d", n);
}

void calc_maior(int *nums, int *maior){
    *maior = *nums;
    for(int i = 1; i < QTD; i++){
        if(*maior < *(nums + i)){
            *maior = *(nums + i);
        }
    }
}

void imprimir(int *maior){
    printf("\n\nMaior número: %d", *maior);
}

void main(){
    int *nums, *maior;

    nums = (int*)(malloc(QTD * sizeof(int)));
    maior = (int*)(malloc(sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(nums + i);
    }

    calc_maior(nums, maior);
    imprimir(maior);
}