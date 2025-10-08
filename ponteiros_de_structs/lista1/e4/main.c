/*
Faça um programa que:
-Tenha uma estrutura para Pokemon com:
    -nome (vetor de char de 10 characteres)
    -vida
    -Ataque
    -Defesa

O programa deve:
    -Pedir para que o usuário digite os valores do nome, vida, ataque e defesa.
Apresente na tela.
Tudo deve ser feito na função main.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOME 10

typedef struct {
    char nome[TAM_NOME];
    int vida, atq, def;
} Pokomon;

void main(){
    Pokomon pok;

    printf("Nome pokemon: ");
    fgets(pok.nome, TAM_NOME, stdin);
    pok.nome[strcspn(pok.nome, "\n")] = '\0';

    printf("Vida: ");
    scanf("%d", &pok.vida);

    printf("Ataque: ");
    scanf("%d", &pok.atq);

    printf("Defesa: ");
    scanf("%d", &pok.def);

    printf("\n\n\n\n\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", pok.nome, pok.vida, pok.atq, pok.def);
}