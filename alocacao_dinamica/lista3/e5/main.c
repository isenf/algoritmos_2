/*
Faça um programa que peça 6 valores inteiros, mas o primeiro valor
deve ser colocado na última posição do vetor, o segundo valor deve
ser colocado na penúltima posição e assim por diante.
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

    for(int i = QTD - 1; i >= 0; i--){
        ler(nums + i);
    }

    printf("\n\nValores em ordem do vetor:\n");

    for(int i = 0; i < QTD; i++){
        imprime(nums + i);
    }
}