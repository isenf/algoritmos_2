/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int main(int argc, char** argv) {
	int a;
	a=3;	
	printf("Valor: %d",a);
	return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *p;
    p = (int*)(malloc(sizeof(int)));
    *p = 3;
    printf("Valor: %d", *p);
    free(p);
}