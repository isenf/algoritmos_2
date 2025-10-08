/*
7.	Faça o mesmo programa do exercício 1 e 4, mas a leitura deve ser feita dentro de uma função chamada ler() 
e a apresentação dos dados deve ser feita em outra função chamada apresentar(). Não usar ponteiro, portanto,
a função ler deve retornar a variável heterogênea.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOME 10

typedef struct {
    char nome[TAM_NOME];
    int vida, atq, def;
} Pokomon;

Pokomon ler(Pokomon pok){
    printf("Nome pokemon: ");
    fgets(pok.nome, TAM_NOME, stdin);
    pok.nome[strcspn(pok.nome, "\n")] = '\0';

    printf("Vida: ");
    scanf("%d", &pok.vida);

    printf("Ataque: ");
    scanf("%d", &pok.atq);

    printf("Defesa: ");
    scanf("%d", &pok.def);

    return pok;
}

void apresentar(Pokomon pok){
    printf("\n\n\n\n\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", pok.nome, pok.vida, pok.atq, pok.def);
}

void main(){
    Pokomon pokemon;

    pokemon = ler(pokemon);
    apresentar(pokemon);
}