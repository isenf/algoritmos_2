/*
Faça um programa que peça um valor inicial e conte deste valor até 4, 
supondo que o usuário sempre digite um valor <= 4
*/

#include <stdio.h>

#define PASSO 1
#define FIM 4

void contar(int num){
    if(num <= FIM){
        printf("%d\n", num);
        contar(num + PASSO);
    }
}

void main(){
    int num;

    printf("Digite um valor <= 4: ");
    scanf("%d", &num);

    contar(num);
}