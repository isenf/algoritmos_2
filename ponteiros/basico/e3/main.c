/*
3-Faça um programa que:
    -Possua uma variável t do tipo double.
    -Atribua um valor à variável t.
    -Crie um ponteiro para t.
    -Use o ponteiro para atribuir um valor à t.
    -Apresente o valor de t, usando o ponteiro.
*/

#include <stdio.h>
#include <string.h>

void main(){
    double t, *ptr;
    t = 10.4682;
    ptr = &t;
    
    printf("t antes -> %f\n", *ptr);
    printf("\n\n%s\t%p\t%f\n%s\t%p\t%p\n", "t", &t, t, "ptr", &ptr, ptr);

    
    *ptr = 3.1415926;

    printf("\nt depois -> %f\n", *ptr);
    printf("\n\n%s\t%p\t%f\n%s\t%p\t%p\n", "t", &t, t, "ptr", &ptr, ptr);

}