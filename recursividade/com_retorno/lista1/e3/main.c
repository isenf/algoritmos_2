/*
Faça um programa que peça 4 valores e calcule a soma de todos os valores. Por fim, faça o cálculo da média
*/

#include <stdio.h>

#define TAM 4

void ler(float v[], int i){
    if(i < TAM){
        printf("Insira o valor %d: ", i + 1);
        scanf("%f", &v[i]);

        ler(v, i + 1);
    }
}

float calcSoma(float v[], int i){
    if(i < TAM){
        return v[i] + calcSoma(v, i + 1);
    } else{
        return 0;
    }
}

float calcMedia(float s){
    return s / TAM;
}

void main(){
    float val[TAM], soma, med;
    int i;
    soma = med = i = 0; //deu vontade de usar isso

    ler(val, i);

    soma = calcSoma(val, i);
    med = calcMedia(soma);

    printf("\n\nMédia: %.2f", med);


}