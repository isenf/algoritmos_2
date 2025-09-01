/*
1-Faça um programa que:
    -Possua uma variável r do tipo inteiro.
    -Atribua um valor à variável r.
    -Crie um ponteiro para r.
    -Use o ponteiro para atribuir um outro valor à r.
    -Apresente o valor de r, usando o ponteiro.
*/

#include <stdio.h>
#include <string.h>

void main(){
    int r, *ptr;
    r = 47;
    ptr = &r;

    printf("Valor de r antes -> %d\n", *ptr);
    printf("\n\n%s\t%p\t%d\n%s\t%p\t%p\n", "r", &r, r, "ptr", &ptr, ptr);


    *ptr = 186;

    printf("\nValor de r depois -> %d\n", *ptr);
    printf("\n\n%s\t%p\t%d\n%s\t%p\t%p\n", "r", &r, r, "ptr", &ptr, ptr);

}