#include <stdio.h>
#include <stdlib.h>


int main(void){

// 1 - Assumindo que pulo[] é um vetor do tipo int, qual expressão referencia o valor do terceiro elemento do vetor? 

int pulo[4];
pulo[2] = 5;

int *pont = &pulo[2];
*pont = 10;

printf("%d ",*pont);



}

