/*
Faça um programa que peça 10 valores e, depois, apresente-os, mas multiplicado por 2;
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 10

void ler(int *num){
    printf("-> ");
    scanf("%d", num);
}

void calcDobro(int *num){
    *num = *num * 2;
}

void apresenta(int *num){
    printf("%d\n", *num);
}

void main(){
    int *nums;

    nums = (int*)(malloc(QTD * sizeof(int)));

    for(int i = 0; i < QTD; i++){
        ler(nums + i);
    }

    for(int i = 0; i < QTD; i++){
        calcDobro(nums + i);
    }

    for(int i = 0; i < QTD; i++){
        apresenta(nums + i);
    }


}