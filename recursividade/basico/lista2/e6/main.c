/*
Escreva um algoritmo que leia 6 valores e retorne a quantidade de valores digitados
que estão entre 5 e 8 (inclusive o 5 e 8). Por exemplo, se o usuário digitar:
9 2 1 8 6 7 10
Então, o programa deverá retornar 3, porque há três números entre 5 e 8 (o 6,7 e 8).
Faça usando recursividade. A função recursiva deve retornar o número de valores
entre 5 e 8 para a função main.
*/

#include <stdio.h>

#define TAM 6

void meuLoop(int i, int numeros[], int *count){
    if(i < TAM){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] >= 5 && numeros[i] <= 8){
            (*count)++;
        }

        meuLoop(++i, numeros, count);
    }
}

void main(){
    int count = 0, i = 0, nums[TAM];

    meuLoop(i, nums, &count);

    printf("\n\n\n\n\nHá %d números entre 5 e 8", count);
}