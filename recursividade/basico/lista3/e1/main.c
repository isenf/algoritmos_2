/*
Transforme os laços em funções recursivas:

1-

int x,y;

printf("\nJogo da adivinhacao!");

printf("\nJogador 1, escolha um numero:");

scanf("%d",&x);

system("CLS");//<-Esta linha só funciona se der include de stdlib.h.

//Se continuar dando problema de compilação, remova-a.

do{

    printf("\nJogador 2, digite um numero:");

    scanf("%d",&y);

}while(x!=y);

printf("\nParabens!!! Voce adivinhou o numero digitado pelo jogador 1!!!");
*/

#include <stdio.h>
#include <stdlib.h>

void loop(int y, int x){
    printf("\nJogador 2, digite um numero: ");
    scanf("%d",&y);

    if(y != x){
        loop(y, x);
    }
}

void main(){
    int x, y;

    printf("\nJogo da adivinhacao!");
    printf("\nJogador 1, escolha um numero: ");

    scanf("%d", &x);

    system("CLS"); 

    loop(y, x);

    printf("\n\nParabens!!! Voce adivinhou o numero digitado pelo jogador 1!!!");


}