#include <stdio.h>

int main(void){

    int tam = 10;
    float vect[tam], somaPositivos = 0;
    int negativos = 0;

    for(int i = 0;i<tam;i++){
        printf("Digite um valor para a posicao %i: ",i+1);
        scanf("%f",&vect[i]);
        getchar();
        if(vect[i]>0){
            somaPositivos+=vect[i];
        }else{
            negativos++;
        }
    }

    printf("\n\nA quantidade de numeros negativos eh: %i e a soma dos numeros positivos eh: %.2f",negativos,somaPositivos);



}