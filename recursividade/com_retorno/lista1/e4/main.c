/*
Faça um programa que peça 4 valores e apresente, no fim, o maior valor.
*/

#include <stdio.h>

#define TAM 4

void ler(int v[], int i){
    if(i < TAM){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &v[i]);

        printf("- %d\t%d\n", i, v[i]);
        ler(v, ++i);

    }
}

int maior(int v[], int i, int m){
    if(i < TAM){
        if(m < v[i]){
            m = v[i];
        }
        return maior(v, ++i, m);;
    }
    return m;
}

void main(){
    int val[TAM], m, i = 0;

    ler(val, i);

    m = val[0];
    m = maior(val, i, m);

    printf("\n\n%d", m);

}