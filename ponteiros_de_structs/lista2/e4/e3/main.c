/*
Repita os exercícios anteriores, mas em vez de inicializar os ponteiros na main, use uma função para inicializá-las
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int cod;
    float pres, temp;
} Caldeira;

void inicializar(Caldeira **ptr){
    *ptr = (Caldeira*)(malloc(sizeof(Caldeira)));
}

void main(){
    Caldeira *p;

    inicializar(&p);

    printf("Código da caldeira: ");
    scanf("%d", &p->cod);

    printf("Pressão: ");
    scanf("%f", &p->pres);
    
    printf("Temperatura: ");
    scanf("%f", &p->temp);

    printf("\n\n\n\n\nCódigo: %d\nPressão: %.2f\nTemperatura: %.2f", p->cod, p->pres, p->temp);


}