/*
Faça um programa que represente um produto (com código, nome e preço). Aloque dinamicamente o produto.
Atribua um valor para cada campo e os apresente na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50

typedef struct{
    int codigo;
    char nome[TAM_NOME];
    float preco;
} Produto;

void main(){
    Produto *p;
    p = (Produto*)(malloc(sizeof(Produto)));

    printf("Código do produto: ");
    scanf("%d", &p->codigo);
    fflush(stdin);

    printf("Nome: ");
    fgets(p->nome, TAM_NOME, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';


    printf("Preço: ");
    scanf("%f", &p->preco);

    printf("\n\n\n\n\nCódigo: %d\nNome: %s\nPreço: %f", p->codigo, p->nome, p->preco);

}