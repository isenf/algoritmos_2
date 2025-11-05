/*
Transforme este código em uma função recursiva, eliminando o laço FOR:

Escreva um algoritmo que leia 6 valores, um de cada vez, e conte quantos destes
valores são pares. No fim do programa, deve ser apresentada a quantidade de
números pares. Use laço FOR.
*/

#include <stdio.h>

#define TAM 6

void loopFor(int numeros[], int *par){
    for(int i = 0; i< TAM; i++){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
            (*par)++;
        }

    }
}

void main(){
    int numeros[TAM], par = 0;

    loopFor(numeros, &par);

    printf("\n\n\n\n\n%d números pares", par);
}

