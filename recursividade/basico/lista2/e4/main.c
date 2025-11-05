/*
Transforme este código em uma função recursiva, eliminando o laço FOR:

Escreva um algoritmo que leia 8 valores e encontre o menor deles. Faça usando
recursividade. A função recursiva deve sempre retornar o menor valor.
*/

#include <stdio.h>

#define TAM 8

void loopFor(int i, int numeros[], int *menor){
    if(i < TAM){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0){
            *menor = numeros[0];
        }
        else if(numeros[i] < *menor){
            *menor = numeros[i];
        }

        loopFor(++i, numeros, menor);
    }

}

void main(){
    int numeros[TAM], i = 0, menor = 0;

    loopFor(i, numeros, &menor);

    printf("\n\n\n\n\nMenor número: %d", menor);
}