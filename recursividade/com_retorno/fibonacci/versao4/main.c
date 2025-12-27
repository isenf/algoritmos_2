#include <stdio.h>
#include <stdlib.h>

long long int *memoria;
long long int count=0;

long long int fibboVR4(int i){
    count++;

    if(memoria[i] != 0){
        return memoria[i];
    } else{
        return memoria[i] = fibboVR4(i - 2) + fibboVR4(i - 1);
    }
}


void main(){
    long long int res;
    int ele;
    memoria = (long long int*) calloc(100, sizeof(long long int));

    memoria[1] = memoria[2] = 1;

    ele = 6;

    res = fibboVR4(ele);

    printf("\nO elemento %d na sequencia = %lld",ele, res);
	printf("\nQtd de execucoes: %lld", count);


}