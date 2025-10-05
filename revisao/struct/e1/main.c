/*
Faça um algoritmo que tenha um registro (estrutura) que represente
um aluno. O usuário deve digitar o RA, nome e endereço do aluno. Em
seguida, o algoritmo deve apresentar os dados do aluno.
*/

#include <stdio.h>
#include <string.h>

#define TAM_NOME 100
#define TAM_END 200

typedef struct {
    int ra;
    char nome[100];
    char end[200];
} Aluno;


void main(){
    Aluno al;

    printf("RA do aluno: ");
    scanf("%d", &al.ra);
    fflush(stdin);


    printf("Nome do aluno: ");
    fgets(al.nome, TAM_NOME, stdin);
    al.nome[strcspn(al.nome, "\n")] = '\0';
    
    printf("Endereço do aluno: ");
    fgets(al.end, TAM_END, stdin);
    al.end[strcspn(al.end, "\n")] = '\0';

    printf("\n\nRA: %d\nNome: %s\nEndereço: %s", al.ra, al.nome, al.end);
}