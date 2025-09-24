/*
Faça um programa que peça 10 valores e, depois, apresente-os na tela de trás para frente.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 10

void ler(int *num){
    printf("-> ");
    scanf("%d", num);
}

void main(){
    int *numerus;
    numerus = (int*)(malloc(QTD * sizeof(int)));
    
    for(int i = 0; i < QTD; i++){
        ler(numerus + i);
    }

    for(int i = QTD - 1; i >= 0; i--){
        printf("%d\n", *(numerus + i));
    }

    free(numerus);
}