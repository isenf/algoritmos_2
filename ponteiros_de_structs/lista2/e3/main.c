/*
Faça um programa que represente uma caldeira (com código, pressão e temperatura). Aloque dinamicamente a caldeira. 
Atribua um valor para cada campo e os apresente na tela.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    float pressao, temp;
} Caldeira;

void main(){
    Caldeira *p;

    p = (Caldeira*)(malloc(sizeof(Caldeira)));

    printf("Código da caldeira: ");
    scanf("%d", &p->codigo);

    printf("Pressão: ");
    scanf("%f", &p->pressao);

    printf("Temperatura: ");
    scanf("%f", &p->temp);

    printf("\n\n\n\n\nCódigo: %d\nPressão: %.2f\nTemperatura: %.2f", p->codigo, p->pressao, p->temp);
}