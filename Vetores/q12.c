#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 10,  menor = 0;
    int v[tam];
    // Preenchendo o vetor

    for(int i = 0;i<tam;i++){
        v[i] = rand()%30;
    }

    // Ordenando os elementos

    for(int i = 0;i<tam;i++){
        for(int j = i;j<tam;j++){
              if(v[i] > v[j]){
                menor = v[i];
                v[i]  = v[j];
                v[j] = menor;
              }
        }
        
    }

    // Imprimindo os vetores

    printf("Vetor 1\n");

    for(int i = 0;i<tam;i++){
        printf("%i ",v[i]);
    }

   
}