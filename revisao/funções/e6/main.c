/*
Crie um algoritmo que peça sua idade em anos, calcule quantos dias
representam estes anos (ignore anos bissextos), e apresente o resultado.
*/

#include <stdio.h>
#include <locale.h>

int converte_idade(float idade){
    int dias = idade * 365;
    return dias;
}

int leitura(){
    int idade;

    printf("Digite sua idade (em anos): ");
    scanf("%d", &idade);

    return idade;
}

void imprime(int dias){
    printf("Você já viveu pelo menos %d dias", dias);
}

void main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade, dias;

    idade = leitura();
    dias = converte_idade(idade);

    imprime(dias);
}