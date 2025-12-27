#include <stdio.h>
#include <stdlib.h>

long long int *memoria;
long long int count=0;

long long int fibboNR(int ele){
    int a = 1, b = 1, aux;

    for(int i = 0; i <= ele; i++){
        count++;

        aux = b;
        b = a + b;
        a = aux;
    }

    return b;
}


void main(){
    long long int res;
    int ele;
    memoria = (long long int*) calloc(100, sizeof(long long int));

    memoria[1] = memoria[2] = 1;

    ele = 6;

    res = fibboNR(ele);

    printf("\nO elemento %d na sequencia = %lld",ele, res);
	printf("\nQtd de execucoes: %lld", count);


}