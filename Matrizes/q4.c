#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int matriz[5][5];
    
    int countRows = 0,countColumns = 0;

    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            matriz[i][j] = rand()%26;
        }
    }

    

    



    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            printf("%d ",matriz[i][i]);
        }
        printf("\n");
    }
}