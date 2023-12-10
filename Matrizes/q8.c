#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    srand(time(NULL));

    char inimigos = 'i', heroes = 'h', armas = 'a', porcoes = 'p';
    int qtd = 0;


    int tam = 5;
    int row = rand()%tam, column = rand()%tam;
    char tabuleiro[tam][tam];
    char preenchidos[tam][tam];



    do{

        for(int i = 0;i<tam;i++){
            int j = rand()%5, k = rand()%5;
            if(preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos){
                while (preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos)
                {
                    tabuleiro[j][k] = inimigos;
                    
                }
                qtd++;

            }else{
                tabuleiro[j][k] = inimigos;
                qtd++;
            }

            
        }

        for(int i = 0;i<2;i++){
            int j = rand()%5, k = rand()%5;
            if(preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes){
                while (preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes)
                {
                    tabuleiro[j][k] = heroes;
                    
                }
                qtd++;

            }else{
                tabuleiro[j][k] = heroes;
                qtd++;
            }
        }

        for(int i = 0;i<4;i++){
            int j = rand()%5, k = rand()%5;
            if(preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes || preenchidos[j][k] == armas){
                while (preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes || preenchidos[j][k] == armas)
                {
                    tabuleiro[j][k] = armas;
                    
                }
                qtd++;

            }else{
                tabuleiro[j][k] = armas;
                qtd++;
            }
        }

        for(int i = 0;i<4;i++){
            int j = rand()%5, k = rand()%5;
            if(preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes || preenchidos[j][k] == armas){
                while (preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes || preenchidos[j][k] == armas)
                {
                    tabuleiro[j][k] = armas;
                    
                }
                qtd++;

            }else{
                tabuleiro[j][k] = armas;
                qtd++;
            }
        }for(int i = 0;i<4;i++){
            int j = rand()%5, k = rand()%5;
            if(preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes || preenchidos[j][k] == armas || preenchidos[j][k] == porcoes){
                while (preenchidos[j][k]!='0'  ||  preenchidos[j][k] == inimigos || preenchidos[j][k] == heroes || preenchidos[j][k] == armas || preenchidos[j][k] == porcoes)
                {
                    tabuleiro[j][k] = porcoes;
                    
                }
                qtd++;

            }else{
                tabuleiro[j][k] = porcoes;
                qtd++;
            }
        }


    }while(qtd!=13);


    printf("\n\nImprimindo o tabuleiro\n\n");

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%i ",tabuleiro[i][j]);

        }
        printf("\n");
    }

    

}   