#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  char cenario[10][10];
  int balas = 4, balasRick = 0, estaMorto = 0, acabou = 0;

  // Preencher cenario com '_' (disponibilidade)
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cenario[i][j] = '_';
    }
  }

  // Posicionando Rick aleatoriamente
  int r_l = rand() % 10;
  int r_c = rand() % 10;

  cenario[r_l][r_c] = 'R';

  // Posicionar zumbis
  for (int z = 1; z <= 15;) {
    int z_l = rand() % 10;
    int z_c = rand() % 10;

    if (cenario[z_l][z_c] == '_') {
      cenario[z_l][z_c] = 'z';
      z++;
    }
  }

  // Posicionar obstaculos
  for (int o = 1; o <= 15;) {
    int o_l = rand() % 10;
    int o_c = rand() % 10;

    if (cenario[o_l][o_c] == '_') {
      cenario[o_l][o_c] = 'X';
      o++;
    }
  }

  // Posicionar saída
  for (int s = 1; s <= 1;) {
    int s_l = rand() % 10;
    int s_c = rand() % 10;

    if (cenario[s_l][s_c] == '_') {
      cenario[s_l][s_c] = '[';
      s++;
    }
  }

  // Posicionar balas
  for (int i = 1; i <= balas;) {
    int b_l = rand() % 10;
    int b_c = rand() % 10;

    if (cenario[b_l][b_c] == '_') {
      cenario[b_l][b_c] = 'B';
      i++;
    }
  }

  // Jogo
  do {

    // imprimir cenario
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        printf("%c ", cenario[i][j]);
      }
      printf("\n");
    }

    printf("\n\nBalas rick: %i\n\n", balasRick);
    char movimentacao;
    printf(": ");
    scanf("%c", &movimentacao);
    getchar();

    switch (movimentacao) {
    case 'w':
      if (cenario[r_l - 1][r_c] != 'X' && (r_l - 1) >= 0) {
        if (cenario[r_l - 1][r_c] == 'B') {
          balasRick++;
          balas--;
        }
        else if (cenario[r_l - 1][r_c] == 'z') {
          if(balasRick == 0){
            printf("Voce morreu! ");
            estaMorto = 1;
          }else{
            balasRick--;
          }
        }
        
        if (cenario[r_l - 1][r_c] == '[') {
          printf("Voce conseguiu se salvar! ");
          acabou = 1;
          break;
        }
        cenario[r_l][r_c] = '_';
        r_l--;
        cenario[r_l][r_c] = 'R';
      }
      break;
    case 's':
      if (cenario[r_l + 1][r_c] != 'X' && (r_l + 1) <= 9) {
        if (cenario[r_l + 1][r_c] == 'B') {
          balasRick++;
          balas--;
        }
        else if (cenario[r_l + 1][r_c] == 'z') {
          if(balasRick == 0){
            printf("Voce morreu! ");
            estaMorto = 1;
          }else{
            balasRick--;
          }
        }
        if (cenario[r_l + 1][r_c] == '[') {
          printf("Voce conseguiu se salvar! ");
          acabou = 1;
          break;
        }
        cenario[r_l][r_c] = '_';
        r_l++;
        cenario[r_l][r_c] = 'R';
      }
      break;
    case 'a':
      if (cenario[r_l][r_c - 1] != 'X' && (r_c - 1) >= 0) {
        if (cenario[r_l][r_c - 1] == 'B') {
          balasRick++;
          balas--;
        }
        else if (cenario[r_l][r_c - 1] == 'z') {
          if(balasRick == 0){
            printf("Voce morreu! ");
            estaMorto = 1;
          }else{
            balasRick--;
          }
        }
        if (cenario[r_l][r_c - 1] == '[') {
          printf("Voce conseguiu se salvar! ");
          acabou = 1;
          break;
        }
        cenario[r_l][r_c] = '_';
        r_c--;
        cenario[r_l][r_c] = 'R';
      }
      break;
    case 'd':
      if (cenario[r_l][r_c + 1] != 'X' && (r_c + 1) <= 9) {
        if (cenario[r_l - 1][r_c + 1] == 'B') {
          balasRick++;
          balas--;
        }
        else if (cenario[r_l][r_c + 1] == 'z') {
          if(balasRick == 0){
            printf("Voce morreu! ");
            estaMorto = 1;
          }else{
            balasRick--;
          }
        }
        if (cenario[r_l][r_c + 1] == '[') {
          printf("Voce conseguiu se salvar! ");
          acabou = 1;
          break;
        }
        cenario[r_l][r_c] = '_';
        r_c++;
        cenario[r_l][r_c] = 'R';
      }
      break;
    default:;
    }

  } while (estaMorto != 1 && acabou != 1);

  return 0;
}