/*
Faça um programa que peça um número e retorne o fatorial deste número.
*/

#include <stdio.h>

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n * fatorial(n - 1);
        
    }
}

void main(){
    int num, fat;

    printf("Digite um número: ");
    scanf("%d", &num);

    fat = fatorial(num);

    printf("\n\nFatorial de %d eh %d", num, fat);
}