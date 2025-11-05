/*
Transforme este código em uma função recursiva, eliminando o laço FOR.

Escreva um algoritmo que leia 8 valores e encontre o maior deles. Faça usando
recursividade. A função recursiva deve sempre retornar o maior valor.
*/

#include <stdio.h>

#define TAM 8

void loopFor(int i, int numeros[], int  *maior){
    if(i < TAM){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0){
            *maior = numeros[0];
        } else if(numeros[i] > *maior){
            *maior = numeros[i];
        }

        loopFor(++i, numeros, maior);
    }
}

void main(){
    int numeros[TAM], i = 0, maior;

    loopFor(i, numeros, &maior);

    printf("\n\n\n\n\nMaior número: %d", maior);
}