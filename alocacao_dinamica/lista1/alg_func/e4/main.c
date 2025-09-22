/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int calcular(int a){
a=a*2;
return a;
}

int main(int argc, char** argv) {
	int a, dobro;
	a=3;
	dobro=calcular(a);
	printf(“Valor: %d %d”,a, dobro);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int calcular(int *a){
    *a = *a * 2;
    return *a;
}

void main(){
    int *p, dobro;

    p = (int*)(malloc(sizeof(int)));
    *p = 3;
    dobro = calcular(p);
    printf("Valores: %d\t%d", *p, dobro);
    free(p);
}