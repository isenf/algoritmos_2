/*
Faça um algoritmo que peça 5 valores. E crie uma função recursiva que calcule quantos 
valores entre 3 e 8 foram digitados. Então, se foram digitados os valores 
1, 3, 4, 7, 10, a função recursiva deve retornar o número 3, porque há 3 números 
entre 3 e 8. Faça o desenho da execução.
*/

#include <stdio.h>

#define TAM 5
#define MIN 5
#define MAX 8

void ler(int v[], int i){
    if(i < TAM){
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &v[i]);

        ler(v, ++i);
    }
}

int entre(int v[], int i, int n){
    if(i < TAM){
        if(v[i] >= MIN && v[i] <= MAX){
            n++;
        }

        return entre(v, ++i, n);
    }

    return n;
}

void main(){
    int val[TAM], i = 0, n = 0;

    ler(val, i);

    n = entre(val, i, n);
    
    printf("\n\nNº. de valores entre 5 e 8: %d", n);
}