/*
Crie um algoritmo que peça uma temperatura em Celsius, faça a
conversão para Fahrenheit e apresente o valor convertido. F= (9*C/5) + 32
*/

#include <stdio.h>
#include <locale.h>

float converte(float temp_cel){
	float temp_fah = (9*temp_cel/5) + 32;
	return temp_fah;
}

float lerTemp(){
	float temp_cel;
	printf("Insira uma temperatura em graus celsius: ");
	scanf("%f", &temp_cel);
	return temp_cel;
}

void imprime(float temp_cel, float temp_fah){
	printf("A temperatura %.2f°C é %.2f° em fahrenheit", temp_cel, temp_fah);

}

void main(){
	setlocale(LC_ALL, "pt_BR.UTF-8");
		
	float cel, fah;
	
	cel = lerTemp();
	fah = converte(cel);

	imprime(cel, fah);

}
