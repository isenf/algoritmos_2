/*
3-Qual o tamanho de uma variável ponteiro?
*/

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num, *ptr, tam;
    ptr = &num;

    tam = sizeof(ptr);

    printf("Tamanho do ponteiro: %d bytes", tam);
}

/*
A resposta depende da arquitetura da máquina e do compilador,
em arquiteturas 32 bits um ponteiro tem 4 bytes (32 bits) e 
em arquitetura 64 bits um ponteiro tem 8 bytes (64 bits).
O tamanho de um ponteiro NAO depende do tipo de uma variável.
*/