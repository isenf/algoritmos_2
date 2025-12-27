#include <stdio.h>
#include <stdlib.h>

long long int *memoria;
long long int count=0;

long long int fibboVR3(int i){
    count++;

    long long int a, b;

    if(memoria[i] != 0){
        return memoria[i];
    } else{
        a = fibboVR3(i - 2);
        b = fibboVR3(i - 1);

        memoria[i] = a + b;

        return memoria[i];
    }
}


void main(){
    long long int res;
    int ele;
    memoria = (long long int*) calloc(100, sizeof(long long int));

    memoria[1] = memoria[2] = 1;

    ele = 6;

    res = fibboVR3(ele);

    printf("\nO elemento %d na sequencia = %lld",ele, res);
	printf("\nQtd de execucoes: %lld", count);


}