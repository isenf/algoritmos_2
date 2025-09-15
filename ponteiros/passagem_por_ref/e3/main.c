/*
Crie um programa que receba uma temperatura em Celsius, faça a conversão para
Farenheit e apresente o valor convertido. F= (9*C/5) + 32
*/

#include <stdio.h>

void ler(float *n){
    printf("Digite uma temperatura: ");
    scanf("%f", n);
}

void convCparaF(float c, float *f){
    *f = (9 * c / 5) + 32;
}

void imprime(float f){
    printf("eh %.2f em Fahrenheit", f);
}

void main(){
    float temp_cel, temp_fah;

    ler(&temp_cel);
    convCparaF(temp_cel, &temp_fah);
    imprime(temp_fah);


}