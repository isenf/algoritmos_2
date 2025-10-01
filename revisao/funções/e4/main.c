/*
Crie um algoritmo que peça o raio de um círculo, calcule sua área e
apresente o resultado.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES

float calc_area_circulo(float raio){
    float area = M_PI * pow(raio, 2);
    return area;
}

float leitura(){
    float raio;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    return raio;
}

void imprime(float raio, float area){
    printf("Área da circunferência de raio %.2f: %.2f", raio, area);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float raio, area;

    raio = leitura();
    area = calc_area_circulo(raio);

    imprime(raio, area);
}