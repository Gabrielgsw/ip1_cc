#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));

    int tam = 4, pontos_1 = 0, pontos_2 = 0;
    char tabuleiro1[tam][tam], tabuleiro2[tam][tam];

    char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h';
    // Preenchendo o tabuleiro inicial

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            tabuleiro2[i][j] = '_';
        }
    }

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            tabuleiro1[i][j] = '_';
        }
    }


    // Preenchendo o segundo tabuleiro com a

    for(int i=1;i<=2;){
        int a_l = rand()%4;
        int a_c = rand()%4;
        if(tabuleiro2[a_l][a_c] == '_'){
            tabuleiro1[a_l][a_c] = a;
            i++;
        }
    }

    // Preenchendo o segundo tabuleiro com b
    for(int i=1;i<=2;){
        int b_l = rand()%4;
        int b_c = rand()%4;
        if(tabuleiro2[b_l][b_c] == '_'){
            tabuleiro1[b_l][b_c] = b;
            i++;
        }
    }

    // Preenchendo o segundo tabuleiro com c
    for(int i=1;i<=2;){
        int c_l = rand()%4;
        int c_c = rand()%4;
        if(tabuleiro2[c_l][c_c] == '_'){
            tabuleiro1[c_l][c_c] = c;
            i++;
        }
    }
    
    // Preenchendo o segundo tabuleiro com d
    for(int i=1;i<=2;){
        int d_l = rand()%4;
        int d_c = rand()%4;
        if(tabuleiro2[d_l][d_c] == '_'){
            tabuleiro1[d_l][d_c] = d;
            i++;
        }
    }

    // Preenchendo o segundo tabuleiro com e
    for(int i=1;i<=2;){
        int e_l = rand()%4;
        int e_c = rand()%4;
        if(tabuleiro2[e_l][e_c] == '_'){
            tabuleiro1[e_l][e_c] = e;
            i++;
        }
    }

    // Preenchendo o segundo tabuleiro com f
    for(int i=1;i<=2;){
        int f_l = rand()%4;
        int f_c = rand()%4;
        if(tabuleiro2[f_l][f_c] == '_'){
            tabuleiro1[f_l][f_c] = f;
            i++;
        }
    }

    // Preenchendo o segundo tabuleiro com g
    for(int i=1;i<=2;){
        int g_l = rand()%4;
        int g_c = rand()%4;
        if(tabuleiro2[g_l][g_c] == '_'){
            tabuleiro1[g_l][g_c] = g;
            i++;
        }
    }

    // Preenchendo o segundo tabuleiro com h
    for(int i=1;i<=2;){
        int h_l = rand()%4;
        int h_c = rand()%4;
        if(tabuleiro2[h_l][h_c] == '_'){
            tabuleiro1[h_l][h_c] = b;
            i++;
        }
    }

    for(int i = 0;i<tam;i++){
        for(int j = 0;j<tam;j++){
            printf("%c ",tabuleiro1[i][j]);
        }
    }

    do{
        int linha_1, coluna_1,linha_2,coluna_2;

        // imprimindo o tabuleiro vazio

        for(int i = 0;i<tam;i++){
            for(int j = 0;j<tam;j++){
                printf("%c ",tabuleiro2[i][j]);
            }
         printf("\n");
        }


        printf("Jogador 1: Esolha a linha da primeira pedra:  ");
        scanf("%i",&linha_1);
        getchar();
        printf("\n");
        printf("Jogador 1: Esolha a coluna da primeira pedra:  ");
        scanf("%i",&coluna_1);
        getchar();
        printf("\n");
        printf("Jogador 1: Esolha a linha da segunda pedra:  ");
        scanf("%i",&linha_2);
        getchar();
        printf("\n");
        printf("Jogador 1: Esolha a coluna da segunda pedra:  ");
        scanf("%i",&coluna_2);
        getchar();
        printf("\n");
        
        // Imprimindo o tabuleiro para o jogador 1

        for(int i = 0;i<tam;i++){
          for(int j = 0;j<tam;j++){
            if(tabuleiro1[i][j] = tabuleiro1[linha_1][coluna_1] || tabuleiro1[i][j] == tabuleiro1[linha_2][coluna_2]){
                printf("%c ",tabuleiro1[i][j]);
            }else{
                printf("_ ");
            }
            
        }
        printf("\n");
    }

        if(tabuleiro1[linha_1][coluna_1] == tabuleiro1[linha_2][coluna_2]){
            tabuleiro2[linha_1][coluna_1] = tabuleiro1[linha_1][coluna_1];
            tabuleiro2[linha_2][coluna_2] = tabuleiro1[linha_2][coluna_2];
            pontos_1++;
        }

        printf("Jogador 2: Esolha a linha da primeira pedra:  ");
        scanf("%i",&linha_1);
        getchar();
        printf("\n");
        printf("Jogador 2: Esolha a coluna da primeira pedra:  ");
        scanf("%i",&coluna_1);
        getchar();
        printf("\n");
        printf("Jogador 2: Esolha a linha da segunda pedra:  ");
        scanf("%i",&linha_2);
        getchar();
        printf("\n");
        printf("Jogador 2: Esolha a coluna da segunda pedra:  ");
        scanf("%i",&coluna_2);
        getchar();
        printf("\n");

        // Imprimindo o tabuleiro para o jogador 2

        for(int i = 0;i<tam;i++){
          for(int j = 0;j<tam;j++){
            if(tabuleiro1[i][j] = tabuleiro1[linha_1][coluna_1] || tabuleiro1[i][j] == tabuleiro1[linha_2][coluna_2]){
                printf("%c ",tabuleiro1[i][j]);
            }else{
                printf("_ ");
            }
            
        }
        printf("\n");
    }

        if(tabuleiro1[linha_1][coluna_1] == tabuleiro1[linha_2][coluna_2]){
            tabuleiro2[linha_1][coluna_1] = tabuleiro1[linha_1][coluna_1];
            tabuleiro2[linha_2][coluna_2] = tabuleiro1[linha_2][coluna_2];
            pontos_2++;
        }

        for(int i = 0;i<tam;i++){
            for(int j = 0;j<tam;j++){
                if(tabuleiro2[i][j] != '_'){
                    printf("%c ",tabuleiro2[i][j]);
                }
            }
         printf("\n");
        }

        printf("\n\n");


    }while(pontos_1 < 5 || pontos_2 < 5);

     }


    

