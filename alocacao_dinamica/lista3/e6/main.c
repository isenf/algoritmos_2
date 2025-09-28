/*
Faça um programa que peça 6 valores inteiros. Após digitados os
valores, a ordem deve ser trocada de forma que. o primeiro valor
deve ser colocado na última posição do vetor, o segundo valor deve
ser colocado na penúltima posição e assim por diante.

OBS: repare que este exercício é diferente do anterior: no exercício
7, os valores devem ser colocados nas posições invertidas logo após
cada valor ser digitado. No exercício 8, os valores devem ser trocados
apenas depois que todos eles forem digitados.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 6

void ler(int *n){
    printf("Digite um valor: ");
    scanf("%d", n);
}

void troca(int *nums){
    int aux;

    for(int i = 0; i < QTD/2; i++){
        aux = *(nums + i);
        *(nums + i) = *(nums - i + QTD - 1);
        *(nums - i + QTD - 1) = aux;
    }
}

void imprime(int *n){
    printf("%d\t", *n);
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

    troca(nums);
    putchar('\n');

    for(int i = 0; i < QTD; i++){
        imprime(nums + i);
    }

}