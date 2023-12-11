#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 10, posMenor = 0, menor = 0;
    int v[tam], v2[tam];
    // Preenchendo o vetor

    for(int i = 0;i<tam;i++){
        v[i] = rand()%30;
    }

    // Ordenando os elementos

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
                menor = v[posMenor];
            if(v[i] < menor){
                v2[i] = menor;
                menor = v[i];
                posMenor = i;
            }
        }
    }

    // Imprimindo os vetores

    printf("Vetor 1\n");

    for(int i = 0;i<tam;i++){
        printf("%i ",v[i]);
    }

    printf("\n\nVetor 2\n\n");

    for(int i = 0;i<tam;i++){
        printf("%i ",v2[i]);
    }
}