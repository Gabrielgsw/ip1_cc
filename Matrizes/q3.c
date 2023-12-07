#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int rows = 4, columns = 4;
    int matriz1[rows][columns],matriz2[rows][columns],matriz3[rows][columns];


    // Preenchendo os valores de ambas as matrizes
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            matriz1[i][j] = rand()%21;
            matriz2[i][j] = rand()%21;
        }
    }

    // Preenchendo a terceira matriz
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            if(matriz1[i][j]>=matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j];
            }else{
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }
    
}