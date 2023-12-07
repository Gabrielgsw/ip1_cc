#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int tam = 5;

    int matriz[tam][tam], int vect[tam*tam], int count = 0;
    
    

    for(int i = 0;i<tam*tam;i++){
        vect[i] = rand()%100;
    }

    for(int i = 0;i<tam*tam;i++){
        if(vect[count] == vect[i]){
            vect[i] = rand()%100;
        }
    }



    

    



    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%d ",matriz[i][i]);
        }
        printf("\n");
    }
}