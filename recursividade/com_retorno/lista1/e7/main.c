/*
Faça um algoritmo que peça 5 valores. E crie uma função recursiva que calcule 
quantos valores são pares. Faça o desenho da execução.
*/

#include <stdio.h>

#define TAM 5

void ler(int v[], int i){
    if(i < TAM){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &v[i]);

        ler(v, ++i);
    }
}

int par(int v[], int i, int n){
    if(i < TAM){
        if(v[i] % 2 == 0){
            n++;
        }

        return par(v, ++i, n);
    }
    return n;
}

void main(){
    int val[TAM], i = 0, n = 0;

    ler(val, i);

    n = par(val, i, n);
    
    
    printf("\n\nNº. de valores pares: %d", n);
}