/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int main(int argc, char** argv) {
	double x;
	x=3.2;	
	printf("Valor: %lf",x);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    double *ptr;
    ptr = (double*)(malloc(sizeof(double)));
    *ptr = 3.2;
    printf("Valor: %lf", *ptr);
    free(ptr);
}