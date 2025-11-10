/*
Faça um programa que peça um número e retorne a somatória deste número
*/

#include <stdio.h>

int somatoria(int n){
    if(n == 0){
        return 0;
    } else{
        return n + somatoria(n - 1);
    }
}

void main(){
    int num, soma;

    printf("Digite um número: ");
    scanf("%d", &num);

    soma = somatoria(num);

    printf("\n\nA somatória do número é %d", soma);
}