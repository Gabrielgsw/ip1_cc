#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    srand(time(NULL));

    int number, TAM;

    do{

        printf("Digite um inteiro positivo: ");
        scanf("%i",&number);
        getchar();
        TAM = number;

    }while(TAM<0);

    int vetor[TAM], vetor2[TAM];

    //Preenchendo o vetor 1
    for(int i = 0;i<TAM;i++){
        vetor[i] = rand()%101;
        
    }

    //Preenchendo o vetor 2
    for(int i = 0;i<TAM;i++){
        vetor2[i] = vetor[i] * vetor[i];
    }

    // Imprimindo o vetor 2

    for(int i = 0;i<TAM;i++){
        printf("%i ",vetor2[i]);
    }
}