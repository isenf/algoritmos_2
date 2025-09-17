/*
Faça um programa que leia o salário de um trabalhador, calcule a desvalorização em
um ano, usando como base a inflação anual de 2015 (a inflação foi de 10,67%) e
mostre o quanto de poder aquisitivo ele perdeu (supondo que não tenha recebido
reajuste ou aumento).
Por exemplo, uma pessoa que ganhava R$ 1000 em janeiro de 2015 deveria ganhar R$
1106,7 em janeiro de 2016 para que seu salário acompanhe a inflação. O cálculo foi
feito da seguinte forma: salario_novo = 110,67 * salario_antigo / 100.
Caso este trabalhador não receba reajuste, isso significa que ele teve uma perda
aquisitiva de R$ 106,7 (isto é: salario_novo – salario_antigo).
*/

#include <stdio.h>
#include <locale.h>

void ler(float *var){
    printf("Digite seu salário: ");
    scanf("%f", var);
}

void calc_desv(float sal, float *sal_desv){
    *sal_desv = 1.1067 * sal;
}

void calc_perda(float sal, float sal_desv, float *perda){
    *perda = sal_desv - sal;
}

void imprime(float sal, float sal_desv, float perda){
    printf("Salário atual: R$%.2f\nSalário com desvalorização: R$%.2f\nValor da perda: R$%.2f", sal, sal_desv, perda);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float salario, sal_desv, perda;

    ler(&salario);
    calc_desv(salario, &sal_desv);
    calc_perda(salario, sal_desv, &perda);
    imprime(salario, sal_desv, perda);
}