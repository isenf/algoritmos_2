/*
Repita os exercícios anteriores, mas em vez de inicializar os ponteiros na main, use uma função para inicializá-las
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50
#define TAM_END 100

typedef struct{
    char nome[TAM_NOME];
    char end[TAM_END];
    int ra;
} Aluno;

void inicializar(Aluno **ptr){
    *ptr = (Aluno*)(malloc(sizeof(Aluno)));
}

void main(){
    Aluno *p;

    inicializar(&p);

    printf("Nome do aluno: ");
    fgets(p->nome, TAM_NOME, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';

    printf("Endereço: ");
    fgets(p->end, TAM_END, stdin);
    p->end[strcspn(p->end, "\n")] = '\0';

    printf("RA: ");
    scanf("%d", &p->ra);

    printf("\n\n\n\n\nNome: %s\nEndereço: %s\nRA: %d", p->nome, p->end, p->ra);

}