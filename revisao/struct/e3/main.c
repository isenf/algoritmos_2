/*
Faça um algoritmo que tenha um registro (estrutura) que represente
um monstro de bolso. O usuário deve digitar o nome, vida, ataque e defesa
do bichinho. Em seguida, os dados devem ser apresentados.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOME 20

typedef struct{
    char nome[TAM_NOME];
    int vida, atq, def;
} Bicho;


void main(){
    Bicho bixo;

    printf("Nome: ");
    fgets(bixo.nome, TAM_NOME, stdin);
    bixo.nome[strcspn(bixo.nome, "\n")] = '\0';

    printf("Vida: ");
    scanf("%d", &bixo.vida);

    printf("Ataque: ");
    scanf("%d", &bixo.atq);

    printf("Defesa: ");
    scanf("%d", &bixo.def);

    printf("\n\n\n\n\nNome: %s\nVida: %d\nAtaque: %d\nDefesa: %d", bixo.nome, bixo.vida, bixo.atq, bixo.def);
}