#include <stdio.h>
#include <stdlib.h>

int main(void){

    int rows = 5, columns = 10;
    char matriz[rows][columns];
    char gabarito[] = {'a','b','c','a','d','c','b','d','a','b'};
    int resultado[rows],pontos = 0;

    // Setar as respostas
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            printf("Digite a resposta do aluno %i na questao %i: ",(i+1),(j+1));
            scanf("%c",&matriz[i][j]);
            getchar();
            printf("\n");
        }
    }

    // Verificando pontuacao
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            if(gabarito[j]==matriz[i][j]){
                pontos++;
            }

        }
        resultado[i] = pontos;
        pontos = 0;
    }

    printf("\n\n");
    // Imprimindo pontuacao
    for(int i = 0;i<rows;i++){
        printf("O resultado do aluno %i foi de: %i pontos\n",(i+1),resultado[i]);
    }


}