#include <stdio.h>

int main(void){

    int n, somaDivisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%i",&n);

    for(int i = 1;i<n;i++){
        if(n%i==0){
            somaDivisores+=i;
        }
    }

    printf("A soma dos divisores de %i eh: %i",n,somaDivisores);

}