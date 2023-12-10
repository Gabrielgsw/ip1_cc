#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 20;
    int vetor[tam], repetidos[tam/2], ehRepetido = 1;

    // Inicializando o vetor
    for(int i = 0;i<tam;i++){
        vetor[i] = rand()%11;

    }

    // Verificando repeticos

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            if((vetor[i] == vetor[j]) && i!=j){
                repetidos[i] = vetor[i];
            }
        }
    }


    // Imprimindo o novo vetor
    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam/2;j++){
            if(vetor[i] == repetidos[j]){
                ehRepetido = 0;
            }

        }
        if(ehRepetido == 1){
            printf("%i ",vetor[i]);
        }       
        
    }
}
