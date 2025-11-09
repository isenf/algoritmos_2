/*
Faça um programa que peça 4 valores e apresente, no fim, o menor valor.
*/

#include <stdio.h>

#define TAM 4

void ler(int v[], int i){
    if(i < TAM){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &v[i]);

        ler(v, ++i);
    }
}

int menor(int v[], int i, int m){
    if(i < TAM){
        if(m > v[i]){
            m = v[i];
        }

        return menor(v, ++i, m);
    }
    return m;
}

void main(){
    int val[TAM], i = 0, m;

    ler(val, i);

    m = val[0];
    m = menor(val, i, m);

    printf("Menor valor: %d", m);
}