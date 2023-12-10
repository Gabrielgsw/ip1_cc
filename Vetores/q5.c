#include <stdio.h>

int main(void){

    int tam = 10;
    int A[10], B[10], C[10];

    //Preenchendo o vetor A
    for(int i = 0;i<tam;i++){
        printf("Digite uma valor para a posicao [%i] do vetor A: ",i);
        scanf("%i",&A[i]);
    }

    // Preenchendo o vetor B
    for(int i = 0;i<tam;i++){
         printf("Digite uma valor para a posicao [%i] do vetor B: ",i);
            scanf("%i",&B[i]);
    }

    // Preenchendo o vetor C
    for(int i = 0;i<tam;i++){
        C[i] = A[i] - B[i];

    }

    // Imprimindo o vetor C
    for(int i = 0;i<tam;i++){
        printf("%i ",C[i]);
    }


    


}