/*
Transforme o laço FOR abaixo em função recursiva:

int main(int argc, char** argv) {

	int i;
	
	for(i=0;i<4;i++){
		printf("\nE dá-lhe %d",i);
	}
	
	return 0;
}

*/

#include <stdio.h>

#define TAM 4

void meuFor(int i){
    if(i < TAM){
        printf("\n\nE dá-lhe %d :P", i);
        meuFor(++i);
    }
}

void main(){
    int i = 0;

    meuFor(i);

}