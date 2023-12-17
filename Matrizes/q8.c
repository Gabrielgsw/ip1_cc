#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    srand(time(NULL));

    int tam = 5;
    char tabuleiro[tam][tam];
    char inimigos = 'i', herois = 'h', armas = 'a', porcoes = 'p';

    //Preenchendo o tabuleiro

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            tabuleiro[i][j] = '_';
        }
        printf("\n");
    }

    // Preencher aleatoriamente inimigos

    for(int i = 0;i<5;){
        int i_l = rand()%6;
        int i_c = rand()%6;
        if(tabuleiro[i_l][i_c] == '_'){
            tabuleiro[i_l][i_c] = inimigos;
            i++;
        }
    }

    // Preenchendo as armas

    for(int i = 0;i<4;){
        int a_l = rand()%6;
        int a_c = rand()%6;
        if(tabuleiro[a_l][a_c] == '_'){
            tabuleiro[a_l][a_c] = armas;
            i++;
        }
    }

    // Preencher aleatoriamente herois

    for(int i = 0;i<2;){
        int h_l = rand()%6;
        int h_c = rand()%6;
        if(tabuleiro[h_l][h_c] == '_'){
            tabuleiro[h_l][h_c] = herois;
            i++;
        } 
    }

    // Preencher aleatoriamente porcoes

    for(int i = 0;i<2;){
        int p_l = rand()%6;
        int p_c = rand()%6;
        if(tabuleiro[p_l][p_c] == '_'){
            tabuleiro[p_l][p_c] = porcoes;
            i++;
        } 
    }


    // Preenchendo o tabuleiro

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    }

}   