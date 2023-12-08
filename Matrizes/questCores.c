#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Um jogo possui 4 tipos de pedras: azul, vermelha, verde e amarela. Preencha aleatoriamente um tabuleiro 10x10 com estas pedras. Ao final do programa, informe quantas pedras de cada cor foram colocadas no tabuleiro.
int main(void){

    srand(time(NULL));

    int tam = 10, amarelo = 0, azul = 0, verde = 0, vermelho = 0;
    int tabuleiro[tam][tam];


    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            tabuleiro[i][j] = rand()%4;
            switch (tabuleiro[i][j]){
                case 0:
                    amarelo++;
                    break;
                case 1:
                    azul++;
                    break;
                case 2:
                    verde++;
                    break;
                case 3:
                    vermelho++;
                    break;
            }
        }
    }

    printf("Cor amarela: %i pecas\nCor azul: %i pecas\nCor verde: %i pecas\nCor vermelha: %i pecas",amarelo,azul,verde,vermelho);


}