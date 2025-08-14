/*
Crie um algoritmo que peça um valor, calcule o seu quadrado e apresente
o resultado.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float calcula_quadrado(float num){
    float quadrado = pow(num, 2);
    return quadrado;
}

float leitura(){
    float num;

    printf("Insira um número para elevar ao quadrado: ");
    scanf("%f", &num);

    return num;
}

void imprime(float num, float quadrado){
    printf("%.2f ao quadrado é %.2f", num, quadrado);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float val, val_quadrado;
    
    val = leitura();
    val_quadrado = calcula_quadrado(val);

    imprime(val, val_quadrado);
    

}