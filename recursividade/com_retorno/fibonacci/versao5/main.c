#include <stdio.h>
#include <stdlib.h>

long long int *memoria;
long long int count=0;

long long int fibboVR5(int i){
    count++;

    return memoria[i] != 0 ? memoria[i] : fibboVR5(i - 2) + fibboVR5(i - 1);
    
}


void main(){
    long long int res;
    int ele;
    memoria = (long long int*) calloc(100, sizeof(long long int));

    memoria[1] = memoria[2] = 1;

    ele = 6;

    res = fibboVR5(ele);

    printf("\nO elemento %d na sequencia = %lld",ele, res);
	printf("\nQtd de execucoes: %lld", count);


}