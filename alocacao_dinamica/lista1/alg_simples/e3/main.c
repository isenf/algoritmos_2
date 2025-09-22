/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int main(int argc, char** argv) {
	char z;
	z=’c’;	
	printf("Valor: %c",z);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char *ptr;
    ptr = (char*)(malloc(sizeof(char)));
    *ptr = 'c';
    printf("Valor: %c", *ptr);
    free(ptr);
}