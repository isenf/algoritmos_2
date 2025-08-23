/*
10-Quantos bytes tem uma variável do tipo int?
*/

#include <stdio.h>

void main(){
    int tam = sizeof(int);
    printf("Bytes no tipo int: %d", tam);
}