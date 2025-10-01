/*
Crie um algoritmo que peça um valor em minutos, calcule quantos
segundos estes minutos representam e apresente o resultado.
*/

#include <stdio.h>
#include <locale.h>

float min_para_segundos(float min){
    float seg = min * 60;
    return seg;
}

float leitura(){
    float min;

    printf("Digite um valor em minutos: ");
    scanf("%f", &min);

    return min;
}

void imprime(float min, float seg){
    printf("%.2f minutos em segundos é %.2fs", min, seg);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float min, seg;

    min = leitura();
    seg = min_para_segundos(min);

    imprime(min, seg);
}