/*
Faça um algoritmo que tenha um registro (estrutura) que represente
um DVD em uma locadora (procure o que é isso nos livros de História!).
Então, deve ser armazenado o título, gênero, duração e prateleira. O
programa deve pedir os respectivos dados do DVD. Em seguida, deve
apresentá-los.
*/

#include <stdio.h>
#include <string.h>

#define TAM_TIT 100
#define TAM_GEN 20
#define TAM_PRA 5

typedef struct{
    char tit[TAM_TIT], gen[TAM_GEN];
    int dur;
    char pra[TAM_PRA];
} Dvd;


void main(){
    Dvd dvd;

    printf("Titulo: ");
    fgets(dvd.tit, TAM_TIT, stdin);
    dvd.tit[strcspn(dvd.tit, "\n")] = '\0';

    printf("Genero: ");
    fgets(dvd.gen, TAM_GEN, stdin);
    dvd.gen[strcspn(dvd.gen, "\n")] = '\0';

    printf("Duracao: ");
    scanf("%d", &dvd.dur);
    fflush(stdin);

    printf("Prateleira: ");
    fgets(dvd.pra, TAM_PRA, stdin);
    dvd.pra[strcspn(dvd.pra, "\n")] = '\0';

    printf("\n\n\n\n\nTitulo: %s\nGenero: %s\nDuracao: %d\nPrateleira: %s", dvd.tit, dvd.gen, dvd.dur, dvd.pra);

}