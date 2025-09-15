/*
2-Faça um programa que:
    -Crie um ponteiro para uma variável do tipo double.
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

    double num, *ptr;
    ptr = &num;
    *ptr = 2.7182818;

    printf("Endereço da variável: %p\n", &num);
    printf("Valor do ponteiro: %p\n", ptr);
    printf("Valor da variável: %f\n", num);
    printf("Valor da variável usando ponteiro: %f\n", *ptr);
}