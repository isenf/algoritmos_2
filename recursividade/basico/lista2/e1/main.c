/*
5-Transforme o trecho do-while abaixo em uma função recursiva:

int main(int argc, char** argv) {

	int a;
	
	do{
		printf("\nMenu:");
		printf("\n1-Dizer oi");
		printf("\nOutro número para sair");
		scanf("%d",&a);
		if(a==1){
			printf("\nOi");
		}
	}while(a==1);
	return 0;
}
*/

#include <stdio.h>

void meuDoWhile(){
    int a;

    printf("\n===== Menu =====");
	printf("\n1-Dizer oi");
	printf("\nOutro número para sair\n\n-> ");
	scanf("%d",&a);

    if(a == 1){
        printf("\n\nOi!\n\n");
        meuDoWhile();
    }
}

void main(){
    meuDoWhile();

}