#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    int tam = 8, jogadas = 0, fim = 0;
    int c_l, c_c;
    char tabuleiro[tam][tam], cavalo = 'C', aliadas = 'A', inimigas = 'I';


    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            tabuleiro[i][j] = '_';
        }
        printf("\n");
    }

    // Posicionando aleatoriamente o cavalo

    for(int i = 1;i<=1;){

        int cavalo_l = rand()%9;
        int cavalo_c = rand()%9;

        if(tabuleiro[cavalo_l][cavalo_c] == '_')
            tabuleiro[cavalo_l][cavalo_c] = cavalo;
            i++;
            c_l = cavalo_l;
            c_c = cavalo_c;
    }


    // Preenchendo as pecas aleatoriamente

    for(int i = 0;i<tam;){
        int inimigos_l = rand()%9;
        int inimigos_c = rand()%9;
        if(tabuleiro[inimigos_l][inimigos_c] == '_'){
            tabuleiro[inimigos_l][inimigos_c] = inimigas;
            i++;
        }
    }

    // Preenchendo pecas aliadas

    for(int i = 0;i<tam;){
        int aliadas_l = rand()%9;
        int aliadas_c = rand()%9;
        if(tabuleiro[aliadas_l][aliadas_c] == '_'){
            tabuleiro[aliadas_l][aliadas_c] = aliadas;
            i++;
        }
    }

    do{

        for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
        }

    // Movimentacao do cavalo

    if(tabuleiro[c_l-2][c_c+1] == inimigas){
        jogadas++;
    }

    else if(tabuleiro[c_l-2][c_c-1] == inimigas){
        jogadas++;
    }

     else if(tabuleiro[c_l-1][c_c+2] == inimigas){
        jogadas++;
    }

    else if(tabuleiro[c_l+1][c_c+2] == inimigas){
        jogadas++;
    }

    else if(tabuleiro[c_l+2][c_c+1] == inimigas){
        jogadas++;
    }

    else if(tabuleiro[c_l+2][c_c-1] == inimigas){
        jogadas++;
    }

    else if(tabuleiro[c_l-1][c_c-2] == inimigas){
        jogadas++;
    }

    else if(tabuleiro[c_l+1][c_c-2] == inimigas){
        jogadas++;
    }

    if(jogadas != 0){
        printf("Vc pode derrubar em apenas uma jogada! ");
         fim = 1;
    }else{
        printf("Vc nao pode derrubar em apenas uma jogada! ");
        fim = 1;
    }


    }while(fim != 1);


}
