/*
7.	Faça o mesmo programa do exercício 1 e 4, mas a leitura deve ser feita dentro de uma função chamada ler() 
e a apresentação dos dados deve ser feita em outra função chamada apresentar(). Não usar ponteiro, portanto,
a função ler deve retornar a variável heterogênea.
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

Filme ler(Filme fil){
    printf("Titulo filme: ");
    fgets(fil.tit, TAM_TIT, stdin);
    fil.tit[strcspn(fil.tit, "\n")] = '\0';

    printf("Genero: ");
    fgets(fil.gen, TAM_GEN, stdin);
    fil.gen[strcspn(fil.gen, "\n")] = '\0';

    printf("Duracao: ");
    scanf("%d", &fil.dur);

    printf("Prateleira: ");
    scanf("%d", &fil.pra);

    return fil;
}

void apresentar(Filme fil){
    printf("\n\n\n\n\nTitulo do filme: %s\nGenero: %s\nDuracao: %d\nPrateleira: %d", fil.tit, fil.gen, fil.dur, fil.pra);
}

void main(){
    Filme filme;

    filme = ler(filme);
    apresentar(filme);
}