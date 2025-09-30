/*
Para todos os códigos abaixo, faça com que a inicialização da variável da 
função main seja feita por uma função, via passagem por referência.

int main() {
	int a;
	a=3;
	printf("%d",a);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void inicializar(int **n){
    **n = 3;
}

void main(){
    int a, *ptr;
    ptr = (int*)(malloc(sizeof(int)));
    inicializar(&ptr);
    
    printf("%d", *ptr   );
}

