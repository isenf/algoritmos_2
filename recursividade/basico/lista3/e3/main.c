/*
Transforme este código em uma função recursiva, eliminando o laço FOR:

Agora, refaça o exercício anterior com recursividade, sem laço FOR.
*/

#include <stdio.h>

#define TAM 6

void loopFor(int i, int numeros[], int *par){
    if(i < TAM){
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
            (*par)++;
        }

        loopFor(++i, numeros, par);
    }

}

void main(){
    int numeros[TAM], i = 0, par = 0;

    loopFor(i, numeros, &par);

    printf("\n\n\n\n\n%d números pares", par);
}