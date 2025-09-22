/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int ler(){
	int a;
printf("Digite um valor”);
scanf(“%d”,&a);
return a;
}

int main(int argc, char** argv) {
	int a;
	a=ler();
	printf(“Valor: %d”,a);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *ptr){
    printf("Digite um valor: ");
    scanf("%d", ptr);
}

void main(){
    int *p;
    p = (int*)(malloc(sizeof(int)));
    ler(p);
    printf("Valor: %d", *p);
    free(p);
}