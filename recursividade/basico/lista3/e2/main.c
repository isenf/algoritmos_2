/*
int a;

printf("\nDigite um numero");

scanf("%d", &a);

while(a<8){
    if(a%2==0)
        printf("\n%d = par", a);
    else
        printf("\n%d = impar",a);
}
*/

#include <stdio.h>

#define NUM 8

void loop(int a){
    if(a < 8){
        if(a%2==0){
            printf("\n%d = par", a);
        }
        else{
            printf("\n%d = impar", a);
        }

        printf("\nDigite um numero: ");
        scanf("%d", &a);

        loop(a);
    }
    
}

void main(){
    int a;

    printf("\nDigite um numero: ");
    scanf("%d", &a);

    loop(a);
}

