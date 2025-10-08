/*
6.	Idem, mas sem criar a variável (faça por alocação dinâmica).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_NOME 10

typedef struct {
    char nome[TAM_NOME];
    int vida, atq, def;
} Pokomon;

void main(){
    Pokomon*pok;

    pok = (Pokomon*)(malloc(sizeof(Pokomon)));

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