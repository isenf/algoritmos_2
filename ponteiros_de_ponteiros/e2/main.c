/*
Para todos os códigos abaixo, faça com que a inicialização da variável da 
função main seja feita por uma função, via passagem por referência.

int main() {
	int *a;
	a = (int*)malloc(sizeof(int));
	*a=3; //Essa linha deve ficar na função main
	printf("%d",*a);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void inicializar(int **n){
    *n = (int*)(malloc(sizeof(int)));
}

void main(){
    int *a;
    inicializar(&a);
    *a = 3;

    printf("%d", *a);
}