#include <stdio.h>

int main(void){
    
    int media = 0,valor;

    for(int i = 0;i<10;i++){
        printf("Digite um valor: ");
        scanf("%i",&valor);
        getchar();
        if(valor > 0){
            media+=valor;
        }
        printf("\n");
    }

    printf("\n\nA media dos valores foi: %i",media);

}