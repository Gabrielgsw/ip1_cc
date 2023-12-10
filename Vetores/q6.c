#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 10;
    int vetor1[tam], vetor2[tam], vetor3[tam];

    // Lendo o primeiro vetor
    for(int i = 0;i<tam;i++){
        vetor1[i] = rand()%50;
    }

    // Lendo o segundo vetor
    for(int i = 0;i<tam;i++){
        vetor2[i] = rand()%50;
    }

    // Lendo o terceiro vetor
    for(int i = 0;i<tam;i++){
        if(i%2 == 0){
            vetor3[i] = vetor1[i];
        }
        if(i%2!=0){
            vetor3[i] = vetor2[i];
        }
    }

    // Imprimindo o terceiro vetor

    for(int i = 0;i<tam;i++){
        printf("%i ",vetor3[i]);
    }



}