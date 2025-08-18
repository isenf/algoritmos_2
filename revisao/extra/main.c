/*
Faça um programa que peça dois valores, calcule a média destes dois
valores e apresente a média na tela.
*/

#include <stdio.h>
#include <locale.h>

float lerA(){
    float a;
    printf("Digite um valor a: ");
    scanf("%f", &a);
    return a;
}


float lerB(){
    float b;
    printf("Digite um valor b: ");
    scanf("%f", &b);
    return b;
}

float calcMedia(float a, float b){
    float media = (a + b)/2;
    return media;
}

void imprime(float a, float b, float media){
    printf("Média entre %.2f e %.2f é %.2f", a, b, media);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float a, b, media;

    a = lerA();
    b = lerB();
    media = calcMedia(a, b);

    imprime(a, b, media);
}