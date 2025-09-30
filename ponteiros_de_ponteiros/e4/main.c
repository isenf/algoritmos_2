/*
Para todos os códigos abaixo, faça com que a inicialização da variável da 
função main seja feita por uma função, via passagem por referência.

int main() {
	int *a;
	a = (int*)malloc(2 * sizeof(int));
	*a=3; //Essa linha deve ficar na função main
	*(a+1)=5; //Essa linha deve ficar na função main
	printf("%d\n",*a);
    printf("%d\n",*(a+1));
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 2

void inicializar(int **n){
    *n = (int*)(malloc(QTD * sizeof(int)));
}

void main(){
    int *a;
    inicializar(&a);

    *(a + 0) = 3;
    *(a + 1) = 5;

    printf("%d\n", *(a + 0));
    printf("%d\n", *(a + 1));
}