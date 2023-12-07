#include <stdio.h>

int main(void){

    int valor;

    printf("Digite um valor entre 20 e 100: ");
    scanf("%i",&valor);
    

    if((valor%3 == 0) || (valor%5 == 0)){
        printf("\nO valor eh: %i,valor");
    }

}