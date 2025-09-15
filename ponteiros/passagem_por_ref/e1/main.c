/*
Crie um programa que peça um número inteiro e diga se é par ou ímpar.
*/

#include <stdio.h>

void ler(int *n){
    printf("Digite o valor: ");
    scanf("%d", n);
}

void parOuImpar(int n){
    if(n % 2 == 0){
        printf("\nEh par");
    } else{
        printf("\nEh imppar");
    }
}

void main(){
    int num;

    ler(&num);

    parOuImpar(num);
}