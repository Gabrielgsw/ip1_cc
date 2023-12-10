#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 10;
    int vetor1[tam], vetor2[2*tam], comuns[tam], ehDiferente = 0;

    // Lendo o primeiro vetor

    for(int i = 0;i<tam;i++){
        vetor1[i] = rand()% 50;
    }

    // Lendo o segundo vetor

    for(int i = 0;i<2*tam;i++){
        vetor2[i] = rand()%50;
    }

    

    for(int i = 0;i<tam;i++){

        for(int j = 0;j<2*tam;j++){
            if(vetor1[i] == comuns[j]){
                comuns[i] = vetor1[i];
            }
        }
    }

    // Imprimindo os nao comuns
    for(int i = 0;i<tam;i++){

        for(int j = 0;j<tam;j++){
            if(vetor1[i] == comuns[j]){
                ehDiferente = 1;
            }
        }
        if(ehDiferente == 0){
            printf("%i ",vetor1[i]);
        }
    }

    for(int i = 0;i<tam;i++){

        for(int j = 0;j<tam;j++){
            if(vetor2[i] == comuns[j]){
                ehDiferente = 1;
            }
        }
        if(ehDiferente == 0){
            printf("%i ",vetor2[i]);
        }
    }

}