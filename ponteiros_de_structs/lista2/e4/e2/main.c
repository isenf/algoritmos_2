/*
Repita os exercícios anteriores, mas em vez de inicializar os ponteiros na main, use uma função para inicializá-las
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50

typedef struct{
    int cod;
    char nome[TAM_NOME];
    float preco;
} Produto;

void inicializar(Produto **ptr){
    *ptr = (Produto*)(malloc(sizeof(Produto)));
}

void main(){
    Produto *p;

    inicializar(&p);

    printf("Código do produto: ");
    scanf("%d", &p->cod);
    fflush(stdin);

    printf("Nome: ");
    fgets(p->nome, TAM_NOME, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';
    
    printf("Preço: ");
    scanf("%f", &p->preco);

    printf("\n\n\n\n\nCódigo: %d\nNome: %s\nPreço: %f", p->cod, p->nome, p->preco);

}