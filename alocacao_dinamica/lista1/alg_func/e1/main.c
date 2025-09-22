/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

void apresentar(int b){
printf("Valor: %d",b);
}

int main(int argc, char** argv) {
	int a;
	a=4;	
	apresentar(a);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void apresentar(int *b){
    printf("Valor: %d", *b);
}

void main(){
    int *p;
    p = (int*)(malloc(sizeof(int)));
    *p = 4;
    apresentar(p);
    free(p);
}