#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 10;
    int numeros[tam],primos[tam], qndtDivisores = 0;

    //Inicializando o vetor primos com zeros
    for(int i = 0;i<tam;i++){
        primos[i] = 0;
    }

    for(int i = 0;i<tam;i++){
        numeros[i] = rand()%26;
        for(int j = 1;j<=numeros[i];j++){
            if(numeros[i]%j == 0){
                qndtDivisores++;
            }
            
        }
        if(qndtDivisores == 2){
            primos[i] = numeros[i];
        }
        qndtDivisores = 0;
    }

    //Imprimindo os primos e posicao

    for(int i = 0;i<tam;i++){
        if(primos[i]!=0){
            printf("%i na posicao %i\n",primos[i],i);
        }
    }

}