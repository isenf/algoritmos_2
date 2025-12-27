#include <stdio.h>
#include <stdlib.h>

long long int *memoria;
long long int count=0;

long long int fibboVR1(long long int a, long long int b, int i, int ele){
    count++;

    long long int aux;

    if(i <= ele){
        aux = b;
        b = a + b;
        a = aux;

        b = fibboVR1(a, b, ++i, ele);
    }

    return b;
}

void main(){
    long long int res;
    int ele;
    memoria = (long long int*) calloc(100, sizeof(long long int));

    memoria[1] = memoria[2] = 1;

    ele = 6;

    res = fibboVR1(1, 1, 3, 6);

    printf("O elemento %d na sequencia = %lld\n", ele, res);
	printf("Qtd de execucoes: %lld\n", count);


}