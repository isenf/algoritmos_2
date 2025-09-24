/*
Faça um programa que peça 10 valores e, depois, apresente-os na tela.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 10

void ler(int *num){
    printf("-> ");
    scanf("%d", num);
}

void main(){
    int *numeroos;
    numeroos = (int*)(malloc(QTD * sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(numeroos + i);
    }

    for(int i = 0; i < QTD; i++){
        printf("%d\n", *(numeroos + i));
    }

    free(numeroos);


}