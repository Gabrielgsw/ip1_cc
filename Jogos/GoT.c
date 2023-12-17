#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));

    int tam = 10, vida_jon = 100, vida_cersei = 100, vida_rei = 200;

    char tabuleiro[tam][tam];

    // Gerando o tabuleiro inicial

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            tabuleiro[i][j] = '_';
        }
    }


    int j_l = 0;
    int j_c = 0;

    tabuleiro[j_l][j_c] = 'J';
    tabuleiro[4][4] = 'C';
    tabuleiro[9][9] = 'N';

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Gerando obstaculos


    for(int i = 0;i<10;){
        int o_l = rand()%10;
        int o_c = rand()%10;
        if(tabuleiro[o_l][o_c] == '_'){
            tabuleiro[o_l][o_c] = 'O';
            i++;
        }
    }

    // Posicionando inimigos

    for(int i = 0;i<20;){
        int i_l = rand()%10;
        int i_c = rand()%10;
        if(tabuleiro[i_l][i_c] == '_'){
            tabuleiro[i_l][i_c] = 'I';
            i++;
        }
    }

    // Posicionando porcoes

    for(int i = 0;i<10;){
        int p_l = rand()%10;
        int p_c = rand()%10;
        if(tabuleiro[p_l][p_c] == '_'){
            tabuleiro[p_l][p_c] = 'P';
            i++;
        }
    }

    

    // Implementando o game

    do{

        printf("Vida de Jon: %i",vida_jon);
        printf("\n");
        for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%c ",tabuleiro[i][j]);
        }
        printf("\n");

    }   
        char tecla;

        printf(": ");
        scanf("%c",&tecla);

        switch (tecla)
        {
        case 'w':
            if(tabuleiro[j_l-1][j_c] == '_' && (j_l-1) >= 0 ){
                
                
            }
            if(tabuleiro[j_l-1][j_c] == 'I'){
                
                
                vida_jon--;
            }
            if(tabuleiro[j_l-1][j_c] == 'P'){
                
                
                vida_jon+=5;
            }
            tabuleiro[j_l][j_c] = '_';
            j_l--;
            tabuleiro[j_l][j_c] = 'J';

            break;
        
        case 'a':
            if(tabuleiro[j_l][j_c-1] == '_'){
                
                tabuleiro[j_l-1][j_c] = 'J';
            }
            if(tabuleiro[j_l][j_c-1] == 'I'){
                
                tabuleiro[j_l][j_c-1] = 'J';
                vida_jon--;
            }
            if(tabuleiro[j_l][j_c-1] == 'P'){
                
                tabuleiro[j_l][j_c-1] = 'J';
                vida_jon+=5;
            }
            tabuleiro[j_l][j_c] = '_';
            break;
        case 's':
        if(tabuleiro[j_l+1][j_c] == '_'){
                
                tabuleiro[j_l+1][j_c] = 'J';
            }
            if(tabuleiro[j_l+1][j_c] == 'I'){
                
                tabuleiro[j_l+1][j_c] = 'J';
                vida_jon--;
            }
            if(tabuleiro[j_l+1][j_c] == 'P'){
                
                tabuleiro[j_l+1][j_c] = 'J';
                vida_jon+=5;
            }
            tabuleiro[j_l][j_c] = '_';
            break;
        case 'd':
            if(tabuleiro[j_l][j_c+1] == '_'){
                
                tabuleiro[j_l][j_c+1] = 'J';
            }
            if(tabuleiro[j_l][j_c+1] == 'I'){
                
                tabuleiro[j_l][j_c+1] = 'J';
                vida_jon--;
            }
            if(tabuleiro[j_l][j_c+1] == 'P'){
                
                tabuleiro[j_l][j_c+1] = 'J';
                vida_jon+=5;
            }
            tabuleiro[j_l][j_c] = '_';
            break;

        }

        


    }while(1);

}