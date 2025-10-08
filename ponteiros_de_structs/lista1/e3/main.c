/*
Idem, mas sem criar a variável (faça por alocação dinâmica).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_TIT 50
#define TAM_GEN 20

typedef struct{
    char tit[TAM_TIT];
    char gen[TAM_GEN];
    int dur, pra;
} Filme;

void main(){
    Filme *fil;

    fil = (Filme*)(malloc(sizeof(Filme)));

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

    printf("\n\n\n\n\nTitulo do filme: %s\nGenero: %s\nDuracao: %d\nPrateleira: %d", (*fil).tit, (*fil).gen, (*fil).dur, (*fil).pra);
}