/*
Faça um programa que represente um aluno (com nome, endereco e ra). Aloque dinamicamente o aluno.
Atribua um valor para cada campo e os apresente na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50
#define TAM_END 100

typedef struct{
    char nome[TAM_NOME];
    char endereco[TAM_END];
    int ra;
} Aluno;

void main(){
    Aluno *p;
    
    p = (Aluno*)(malloc(sizeof(Aluno)));

    printf("Nome do aluno: ");
    fgets(p->nome, TAM_NOME, stdin);
    p->nome[strcspn(p->nome, "\n")] = '\0';

    printf("Endereço: ");
    fgets(p->endereco, TAM_END, stdin);
    p->endereco[strcspn(p->endereco, "\n")] = '\0';

    printf("RA: ");
    scanf("%d", &p->ra);


    printf("\n\n\n\n\nNome: %s\nEndereço: %s\nRA: %d", p->nome, p->endereco, p->ra);

}