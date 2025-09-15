/*
2- Faça um programa que:
    -Possua uma variável s do tipo float.
    -Atribua um valor à variável s. 
    -Crie um ponteiro para s.
    -Use o ponteiro para atribuir um outro valor à s.
    -Apresente o valor de s, usando o ponteiro.
*/

#include <stdio.h>
#include <string.h>

void main(){
    float s, *ptr;
    s = 1037.87;
    ptr = &s;
    
    printf("s antes -> %.2f\n", *ptr);
    printf("\n\n%s\t%p\t%f\n%s\t%p\t%p\n", "s", &s, s, "ptr", &ptr, ptr);

    *ptr = 2025.09;

    printf("\ns depois -> %.2f\n", *ptr);
    printf("\n\n%s\t%p\t%f\n%s\t%p\t%p\n", "s", &s, s, "ptr", &ptr, ptr);


}