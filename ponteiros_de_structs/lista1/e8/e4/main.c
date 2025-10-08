/*
Modifique o exercício 1 e 4, para que a função ler() não retorne mais uma variável. Em vez disso, a variável da 
função main deve ser passada por referência à função ler(). E a função ler manipulará a variável por meio de um ponteiro.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOME 10

typedef struct {
    char nome[TAM_NOME];
    int vida, atq, def;
} Pokomon;

void ler(Pokomon *pok){
    printf("Nome pokemon: ");
    fgets((*pok).nome, TAM_NOME, stdin);
    (*pok).nome[strcspn((*pok).nome, "\n")] = '\0';

    printf("Vida: ");
    scanf("%d", &(*pok).vida);

    printf("Ataque: ");
    scanf("%d", &(*pok).atq);

    printf("Defesa: ");
    scanf("%d", &(*pok).def);
}

void apresentar(Pokomon pok){
    printf("\n\n\n\n\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", pok.nome, pok.vida, pok.atq, pok.def);
}

void main(){
    Pokomon pokemon;

    ler(&pokemon);
    apresentar(pokemon);
}