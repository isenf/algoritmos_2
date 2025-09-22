/*
Para os exercícios abaixo, substitua as variáveis do tipo int, double, char e 
float por alocação dinâmica. Se houver ponteiros no código, mantenha-os.

int ler(){
	int a;
printf(“\nDigite um valor:”);
	scanf(“%d”,&a);
	return a;
}

int calcular(int a){
	int i;
i=2020 - a;
return i;
}

void apresentar(int i){
	printf(“\nIdade: %d”,i);
}

int main(int argc, char** argv) {
	int ano, idade;
	ano=ler();
	idade=calcular(ano);
	apresentar(idade);
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *a){
    printf("Digite seu ano de nascimento: ");
    scanf("%d", a);
}

void calcular(int a, int *i){
    *i = 2025 - a;
}

void apresentar(int i){
    printf("\n\nIdade: %d", i);
}

void main(){
    int *pa, *pi;
    pa = pi = (int*)(malloc(sizeof(int)));
    ler(pa);
    calcular(*pa, pi);
    apresentar(*pi);
    free(pa);
    free(pi);
}