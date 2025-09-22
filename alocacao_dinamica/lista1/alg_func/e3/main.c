/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int calcular(int a){
a=a*2;
return a;
}

int main(int argc, char** argv) {
	int a;
	a=3;
	a=calcular(a);
	printf(“Valor: %d”,a);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void calcular(int *a){
    *a = *a * 2;
}

void main(){
    int *p;
    p = (int*)(malloc(sizeof(int)));
    *p = 3;
    calcular(p);
    printf("Valro: %d", *p);
    free(p);
}