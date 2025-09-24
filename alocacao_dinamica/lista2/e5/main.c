/*
Faça um programa que deverá calcular 4 notas: ele deverá pedir 4 notas, 
calcular a média e apresentá-la. Mas use uma função para cada tarefa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_NOTAS 4

void ler(float *n, int count){
    printf("Digite a nota %d: ", count + 1);
    scanf("%f", n);
}

void calcMedia(float *notas, float *soma, float *media){
    for(int i = 0; i < NUM_NOTAS; i++){
        *soma += *(notas + i);
    }

    *media = *soma / NUM_NOTAS;
}

void apresenta(float *media){
    printf("Média: %.2f", *media);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float *notas, *soma, *media;
    notas = (float*)(malloc(NUM_NOTAS * sizeof(float)));
    soma = (float*)(calloc(1, sizeof(float)));
    media = (float*)(malloc(sizeof(float)));

    for(int i = 0; i < NUM_NOTAS; i++){
        ler(notas + i, i);
    }

    calcMedia(notas, soma, media);
    apresenta(media);


}