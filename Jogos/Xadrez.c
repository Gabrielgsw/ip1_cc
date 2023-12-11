#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    char tabuleiro[8][8];
    char cavalo = 'C', pedras = 'P';
    int c_l,c_c;

    // Gerando o tabuleiro com '_'
    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            tabuleiro[i][j] = '_'; 
        }
        
    }
    
    // Gerando as peças aleatórias

    for(int i = 1;i<=16;){
        int p_l = rand()%8;
        int p_c = rand()%8;

        if(tabuleiro[p_l][p_c] == '_')
        {
            tabuleiro[p_l][p_c] = pedras;
            i++;
        }

    }

    // Gerando a posição aleatória do cavalo
    c_l = rand()%8;
    c_c = rand()%8; 

    for(int i = 1;i<=1;i++)
    {   
        if(tabuleiro[c_l][c_c] == '_')
        {
            tabuleiro[c_l][c_c] = cavalo;
        }
    }

    for(int i = 0;i<8;i++){
        for(int j = 0;j<8;j++){
            printf("%c ",tabuleiro[i][j]); 
        }
        printf("\n");
    }


}