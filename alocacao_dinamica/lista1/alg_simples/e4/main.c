/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int main(int argc, char** argv) {
	int a;
	printf(“\nDigite um valor:”);
	scanf(“%d”,&a);
	printf("Valor: %d",a);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr;
    ptr = (int*)(malloc(sizeof(int)));
    printf("\nDigite um valor: ");
	scanf("%d", ptr);
    printf("Valor: %d", *ptr);
    free(ptr);
}