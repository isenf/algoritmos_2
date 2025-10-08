/*
Faça o mesmo que o anterior, mas use um ponteiro para apontar para o pokemon e 
manipule os valores usando o ponteiro.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOME 10

typedef struct {
    char nome[TAM_NOME];
    int vida, atq, def;
} Pokomon;

void main(){
    Pokomon pokemon, *pok;

    pok = &pokemon;

    printf("Nome pokemon: ");
    fgets((*pok).nome, TAM_NOME, stdin);
    (*pok).nome[strcspn((*pok).nome, "\n")] = '\0';

    printf("Vida: ");
    scanf("%d", &(*pok).vida);

    printf("Ataque: ");
    scanf("%d", &(*pok).atq);

    printf("Defesa: ");
    scanf("%d", &(*pok).def);

    printf("\n\n\n\n\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", (*pok).nome, (*pok).vida, (*pok).atq, (*pok).def);
}