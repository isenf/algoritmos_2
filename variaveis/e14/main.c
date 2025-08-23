/*
14-Declare uma variável do tipo inteiro e atribua o valor 4300000000. Ao imprimir este valor, o que é apresentado? Por quê?
*/

#include <stdio.h>


void main(){
    unsigned long long int num = 4300000000;
    printf("4300000000 -> %llu\n\n", num);
    printf("unsigned long int: %zu bytes\n", sizeof(unsigned long int));
    
}