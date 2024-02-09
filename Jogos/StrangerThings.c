#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));

    int tam = 3;
    char tabuleiro[tam][tam];
    int vida = 100, taxa_raiva = 0;

    // Preenchendo o tabuleiro
    for (int i = 0; i < tam; i++)
    {
        for(int j = 0;j<tam;j++){
            tabuleiro[i][j] = '_';
        }
    }
    
    // Gerando posicao aleatória do Eleven
    int i_pos = rand()%tam;
    int j_pos = rand()%tam;

    tabuleiro[i_pos][j_pos] = 'E';

    // Comecando o jogo

    do{
        // Imprimindo o tabuleiro

        for(int i = 0;i<tam;i++){
            for(int j = 0;j<tam;j++){
                printf("%c ",tabuleiro[i][j]);
            }
            printf("\n");
        }

    }while(vida>=0);

}