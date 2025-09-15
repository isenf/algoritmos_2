/*
Crie um programa que receba uma temperatura em Farenheit, faça a conversão para
Celsius e apresente o valor convertido. C= 5*(F-32)/9
*/

#include <stdio.h>

void ler(float *n){
    printf("Digite uma temperatura: ");
    scanf("%f", n);
}

void convFparaC(float f, float *c){
    *c = 5 * (f - 32) / 9;
}

void imprime(float c){
    printf("eh %.2f em Celsius", c);
}

void main(){
    float temp_cel, temp_fah;

    ler(&temp_fah);
    convFparaC(temp_fah, &temp_cel);
    imprime(temp_cel);

}