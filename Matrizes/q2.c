#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    
    int rows = 5,columns=5;
    int matriz[rows][columns],x,encontrado = 0;

    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            matriz[i][j]=rand()%101;
        }
    }

    printf("Digite um numero: ");
    scanf("%d",&x);

    for(int i =0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            if(matriz[i][j]==x){
                printf("\nNumero %d encontrado na posição: [%i][%i]",x,i,j);
                encontrado+=1;
                break;
            }
        }
    }

    if(encontrado==0){
        printf("Valor não encontrado! ");
    }


}