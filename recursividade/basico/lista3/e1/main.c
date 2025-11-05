/*
Considere o código a seguir:

int x;
scanf("%d",&x);
for(int i=0;i<x;i++){
printf("\nQue legal! Estou em loop!");
printf("\nE dá-lhe %d",x);
}

Transforme este código em uma função recursiva, eliminando o laço FOR.
*/

#include <stdio.h>

void loop(int i, int x){
    if(i < x){
        printf("\nQue legal! Estou em loop");
        printf("\nE dá-lhe %d\n", i);

        loop(++i, x);
    }
}

void main(){
    int x, i = 0;

    printf("Insira um número: ");
    scanf("%d", &x);

    loop(i, x);


}