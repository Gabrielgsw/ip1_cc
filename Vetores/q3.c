#include <stdio.h>

int main(void){

    int tam = 10;
    int numeros[tam], maiorNumero = 0, posMaior = 0;

    for(int i = 0;i<tam;i++){
        printf("Digite um numero da posicao %i: ",i);
        scanf("%i",&numeros[i]);
        getchar();
        if(numeros[i] > maiorNumero){
            maiorNumero = numeros[i];
            posMaior = i;
        }
    }

    printf("\n\n");
    // Imprimindo o vetor

    for(int i = 0;i<tam;i++){
        printf("%i ",numeros[i]);
    }

    printf("\n\nO maior elemento eh o numero: %i e a posiccao eh: %i",maiorNumero,posMaior);


}