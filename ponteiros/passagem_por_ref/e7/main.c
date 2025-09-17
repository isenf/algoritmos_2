/*
Crie um programa que apresente o seguinte menu:

1-Converter um valor de Celsius para Farenheit
2-Converter um valor de Farenheit para Celsius
0-Sair

Uma vez que o usuário escolha a opção 1 ou 2, o programa deve pedir a temperatura,
fazer a conversão de Celsius para Farenheit ou Farenheit para Celsius (dependendo da
opção escolhida) e mostre o valor original e o valor convertido.
Por fim, o menu deve ser apresentado novamente.
*/

#include <stdio.h>
#include <string.h>

void menu(){
    printf("\n\n1 - Converter um valor de Celsius para Farenheit\n");
    printf("2 - Converter um valor de Farenheit para Celsius\n");
    printf("0 - Sair\n\n");
}

void ler_esc(int *num){
    printf("\n-> ");
    scanf("%d", num);
}

void ler_temp(float *num){
    printf("\nDigite uma temperatura: ");
    scanf("%f", num);
}

void convFparaC(float f, float *c){
    *c = 5 * (f - 32) / 9;
}

void convCparaF(float c, float *f){
    *f = (9 * c / 5) + 32;
}

void imprime_temp(float c, float f){
    printf("\nTemperatura em celsius: %.2f\nTemperatura em Fahrenheit: %.2f\n\n", c, f);
}

void main(){
    int escolha = 1;
    float temp_f = 0, temp_c = 0;

    do{
        menu();
        ler_esc(&escolha);

        if(escolha == 0){
            break;
        }


        switch (escolha){
        case 0: 
            printf("Saindo...");
            break;
        case 1:
            ler_temp(&temp_c);
            convCparaF(temp_c, &temp_f);
            imprime_temp(temp_c, temp_f);
            break;
        
        case 2:
            ler_temp(&temp_f);
            convFparaC(temp_f, &temp_c);
            imprime_temp(temp_c, temp_f);
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }


    } while(escolha != 0);
}