#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

   int tam = 10, repetido = 0, posJ = 0;
   int v1[tam], v2[tam], v3[2*tam]; 

    // Preenchendo o vetor 1 e 2

    

    for(int i = 0;i<tam;i++){
        v1[i] = rand()%26;
        v2[i] = rand()%26;
    }

    // Preenchendo o vetor 3
    for(int i = 0;i<tam;i++){
        v3[i] = v1[i];
    }

    for(int i = 10;i<=2*tam;i++){
        v3[i] = v2[posJ];
        posJ++;
    }

    // Verificando repeticao

    for(int i = 0;i<2*tam;i++){
        for(int j = 0;j<2*tam;j++){
            if((v3[i] == v3[j]) && i != j){
                v3[j] = 0;
            }
        }
    }

    

    //Imprimindo os vetores 

    for(int i = 0;i<tam;i++){
        printf("%i ",v1[i]);
    }

    printf("\n\n");

    for(int i = 0;i<tam;i++){
        printf("%i ",v2[i]);
    }

    printf("\n\n");

    for(int i = 0;i<2*tam;i++){
        if(v3[i] != 0){
         printf("%i ",v3[i]);

        }                
    }
}