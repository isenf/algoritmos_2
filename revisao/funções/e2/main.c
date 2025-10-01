/*
Crie um algoritmo que peça uma temperatura em Fahrenheit, faça a 
conversão para Celsius e apresente o valor convertido. C= 5*(F-32)/9
*/

#include <stdio.h>
#include <locale.h>

float converte(float temp_fah){
    float temp_cel = 5*(temp_fah - 32)/9;
    return temp_cel;
}

float leitura(){
    float temp_fah;
    printf("Insira uma temperatura em graus fahrenheit: ");
    scanf("%f", &temp_fah);
    return temp_fah;
}

void imprime(float temp_fah, float temp_cel){
    printf("A temperatura %.2f°F é %.2f° em celsius", temp_fah, temp_cel);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float cel, fah;

    fah = leitura();
    cel = converte(fah);

    imprime(fah, cel);
}