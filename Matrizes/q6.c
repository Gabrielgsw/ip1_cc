#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    int rows = 5, columns = 4,tamanho = 30, medialFinal = 0, maiorMedia = 0, menorMedia = -100, posJ = 0, posI = 0;
    int info[rows][columns];
    char nomes[rows][tamanho];


    

    for(int i = 0;i<rows;i++){
            printf("Digite o nome do aluno %i: ",(i+1));
            scanf("%s",nomes[i]);
        for(int j = 0;j<columns-1;j++){
            switch (j){
                case 0:
                    printf("Digite o numero de matricula do aluno %i: ",(j+1));                    
                    break;
                case 1:
                    printf("Digite a média das provas do aluno %i: ",(j+1));                    
                    break;
                case 2:
                    printf("Digite a média dos trabalhos do aluno %i: ",(j+1));
                    break;
                
            }   
                scanf("%i",&info[i][j]);
                getchar();
                medialFinal+=info[i][j];
                maiorMedia = info[i][1]+info[i][2];

                if(menorMedia <= maiorMedia){
                    menorMedia = maiorMedia;
                    posJ = j;
                    posI = i;
                }

                
        }
    }

    printf("\n\nImprimindo\n\n");

    printf("%s, matricula: %i e nota final: %i, obteve a maior nota final! ",nomes[posI],info[posI][0],menorMedia);
}