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

void jogadaPlayer(char letra){

    int x,y;
    

    printf("Digite as coordenadas(x,y): ");
    scanf("%d%d",&x,&y);

    // Diminuir as coordenadas
    x--;
    y--;

    if(tabuleiro[x][y] != ' '){
        printf("Esta posicao eh invalida ou ja foi preenchida! \n");
        jogadaPlayer(letra);
    }else{
        tabuleiro[x][y] = letra;
    }
}

// Funcao para os movimentos do pc

void jogadasComputador(char letraPC){

    int i,j;
    

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

// Mostrando o tabuleiro no formato

void mostrarTabuleiro(){

    int t;

    for(t = 0; t<3; t++){
        printf(" %c | %c | %c ",tabuleiro[t][0], tabuleiro[t][1],tabuleiro[t][2]);
        if(t != 2){
            printf("\n---|---|---\n");
        }
    }
    printf("\n");

}

// Verificando se há vencedor

char checarVencedor(){

    int i;

    // Verificando as linhas
    for(i=0;i<3;i++){
        if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro[i][2]){
            return tabuleiro[i][0];
        }
    }

    // Verificando as colunas

    for(i=0;i<3;i++){
        if(tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i] == tabuleiro[2][i]){
            return tabuleiro[0][1];
        }
    }

    // Verificando as diagonais
    if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]){
        return tabuleiro[0][0];
    }

    if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][2]){
        return tabuleiro[0][2];
    }

    return ' ';
}