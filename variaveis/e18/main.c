/*
18-Quantos bytes tem uma variável do tipo double?
*/

#include <stdio.h>

void main(){
    int tam = sizeof(double);
    printf("Tamanho de uma variável double: %d bytes", tam);
}