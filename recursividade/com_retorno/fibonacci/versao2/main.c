#include <stdio.h>
#include <stdlib.h>

long long int *memoria;
long long int count=0;

long long int fibboVR2(int i){
    count++;

    long long int a, b;

    if(i <= 2){
        return 1;
    } else{
        a = fibboVR2(i - 2);
        b = fibboVR2(i - 1);

        return a + b;
    }
}


void main(){
    long long int res;
    int ele;
    memoria = (long long int*) calloc(100, sizeof(long long int));

    memoria[1] = memoria[2] = 1;

    ele = 6;

    res = fibboVR2(ele);

    printf("\nO elemento %d na sequencia = %lld",ele, res);
	printf("\nQtd de execucoes: %lld", count);


}