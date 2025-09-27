/*
Faça um programa que peça 5 números reais. Depois, o programa
deve apresentar o número menor.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5

void ler(int *n){
    printf("\nDigite um número: ");
    scanf("%d", n);
}

void calc_menor(int *nums, int *menor){
    *menor = *nums;
    for(int i = 1; i < QTD; i++){
        if(*menor > *(nums + i)){
            *menor = *(nums + i);
        }
    }
}

void imprimir(int *menor){
    printf("\n\nMenor número: %d", *menor);
}

void main(){
    int *nums, *menor;

    nums = (int*)(malloc(QTD * sizeof(int)));
    menor = (int*)(malloc(sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(nums + i);
    }

    calc_menor(nums, menor);
    imprimir(menor);
}