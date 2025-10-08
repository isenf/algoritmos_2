/*
Modifique o exercício 1 e 4, para que a função ler() não retorne mais uma variável. Em vez disso, a variável da 
função main deve ser passada por referência à função ler(). E a função ler manipulará a variável por meio de um ponteiro.
*/

#include <stdio.h>
#include <string.h>

#define TAM_TIT 50
#define TAM_GEN 20

typedef struct{
    char tit[TAM_TIT];
    char gen[TAM_GEN];
    int dur, pra;
} Filme;

void ler(Filme *fil){
    printf("Titulo filme: ");
    fgets((*fil).tit, TAM_TIT, stdin);
    (*fil).tit[strcspn((*fil).tit, "\n")] = '\0';

    printf("Genero: ");
    fgets((*fil).gen, TAM_GEN, stdin);
    (*fil).gen[strcspn((*fil).gen, "\n")] = '\0';

    printf("Duracao: ");
    scanf("%d", &(*fil).dur);

    printf("Prateleira: ");
    scanf("%d", &(*fil).pra);
}

void apresentar(Filme fil){
    printf("\n\n\n\n\nTitulo do filme: %s\nGenero: %s\nDuracao: %d\nPrateleira: %d", fil.tit, fil.gen, fil.dur, fil.pra);
}

void main(){
    Filme filme;

    ler(&filme);
    apresentar(filme);
}