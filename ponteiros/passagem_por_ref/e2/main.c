/*
Crie um programa que receba dois números e apresente o maior.
*/

#include <stdio.h>

void ler(int *val, int count){
    printf("Digite o valor %d: ", count);
    scanf("%d", val);
}

void eh_maior(int val1, int val2, int *maior){
    *maior = val1 > val2 ? val1 : val2;
}

void imprime(int maior){
    printf("\nO maior valor eh %d", maior);
}

void main(){
    int num1, num2, maior, count = 1;

    ler(&num1, count);
    count++;
    ler(&num2, count);

    eh_maior(num1, num2, &maior);
    imprime(maior);



}