#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char tabuleiro[3][3];
    
int main(void){


}

// Escolha do caractere
void escolherLetra(){

    char letra, letraPC;
    printf("Qual letra voce escolhe? X ou O: ");
    scanf("%c",&letra);
    switch (toupper(letra))
    {
    case 'X':
        letraPC = 'O';
        break;
    case 'O':
        letraPC = 'X';
        break;
    default:
        printf("Escolha inválida. Tente novamente! ");
        escolherLetra();
        break;
    }
}


// Funcao para inicializar o tabuleiro

void incializarTabuleiro(){

    int i,j;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            tabuleiro[i][j] = ' ';
        }
    }
}

// Funcao para obter a jogada do player

void jogadaPlayer(){

    int x,y;
    char letra;

    printf("Digite as coordenadas(x,y): ");
    scanf("%d%d",&x,&y);

    // Diminuir as coordenadas
    x--;
    y--;

    if(tabuleiro[x][y] != ' '){
        printf("Esta posicao eh invalida ou ja foi preenchida! \n");
        jogadaPlayer();
    }else{
        tabuleiro[x][y] = letra;
    }
}

// Funcao para os movimentos do pc

void jogadasComputador(){

    int i,j;
    char letraPC;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(tabuleiro[i][j] == ' ') break;
        }
        if(tabuleiro[i][j] == ' ') break;
    }

    // Verificando se todas as posicoes estao preenchidas e result
    if(i*j == 0){
        printf("Empate! \n");
        exit(0);
    }else{
        tabuleiro[i][j] == letraPC;
    }

}