/*
1-Faça um programa que:
    -Crie um ponteiro para uma variável do tipo inteiro.
    -Use o ponteiro para atribuir um valor para a variável apontada.
    -Imprima o endereço da variável.
    -Imprima o valor do ponteiro.
    -Imprima o valor da variável.
    -Imprima o valor da variável, mas usando o ponteiro.
    -Tente visualizar o que acontece com as impressões.
*/

#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "pt_BR.UTF-8");
    int num, *ptr;

    ptr = &num;
    *ptr = 5;

    printf("Endereço variável: %p\n", &num);
    printf("Valor ponteiro: %p\n", ptr);
    printf("Valor variável: %d\n", num);
    printf("Valor da variável usando ponteiro: %d\n", *ptr);
}

/*
Endereço da variável e o valor do ponteiro são iguais.
Valor da variável e valor da variável usando ponteiro também são iguais.
*/