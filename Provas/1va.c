#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1 VA - IP1 - BCC
// Discente: Gabriel Germano dos Santos Wanderley




typedef struct {
  int posx;
  int posy;
  int balas;
  int arma;
  int vida;
  int embarcacoes;
} Jack;

typedef struct {
  int embarcacoes;
} Salazar;

void preencherCenario(int tam, char cenario[tam][tam]) {
  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      cenario[i][j] = '_';
    }
  }
}
void imprimirCenario(int tam, char cenario[tam][tam]) {
  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      printf("%c ", cenario[i][j]);
    }
    printf("\n");
  }
}

void posicionarEntidades(int tam, char cenario[tam][tam], char obstaculo,
                         int quantidade) {

  for (int i = 0; i < quantidade;) {
    int posx = rand() % tam;
    int posy = rand() % tam;
    if (cenario[posx][posy] == '_') {
      cenario[posx][posy] = obstaculo;
      i++;
    }
  }
}

void posicionarPiratasAoRedor(int tam, char cenario[tam][tam], int posx,
                              int posy) {
  cenario[(posx - 1)][posy] = 'P';
  cenario[(posx - 2)][posy] = 'P';
  cenario[posx][(posy - 1)] = 'P';
  cenario[(posx - 1)][(posy - 1)] = 'P';
  cenario[(posx - 2)][(posy - 1)] = 'P';
  cenario[posx][(posy - 2)] = 'P';
  cenario[(posx - 1)][(posy - 2)] = 'P';
  cenario[(posx - 2)][(posy - 2)] = 'P';
  cenario[posx][(posy - 3)] = 'P';
  cenario[(posx - 1)][(posy - 3)] = 'P';
}

int movimentacao(int tam, char cenario[tam][tam], char tecla, Jack *jack) {

  int next_stage = 0;

  switch (tecla) {
  case 'w':
    if (jack->posx - 1 >= 0) {

      if (cenario[jack->posx - 1][jack->posy] == 'O') {
        break;
      }

      if (cenario[jack->posx - 1][jack->posy] == 'B') {
        jack->balas++;
      }

      if (cenario[jack->posx - 1][jack->posy] == 'A') {
        jack->arma = 1;
      }

      if (cenario[jack->posx - 1][jack->posy] == 'P') {

        if (jack->balas == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 1) {
          jack->balas--;
        }
       
      }

      if (cenario[jack->posx - 1][jack->posy] == 'N') {
        next_stage = 1;
      }
      cenario[jack->posx][jack->posy] = '_';
      jack->posx--;
      cenario[jack->posx][jack->posy] = 'J';
    }
    break;
  case 'a':
    if (jack->posy - 1 >= 0) {

      if (cenario[jack->posx][jack->posy - 1] == 'O') {
        break;
      }

      if (cenario[jack->posx][jack->posy - 1] == 'B') {
        jack->balas++;
      }

      if (cenario[jack->posx][jack->posy - 1] == 'A') {
        jack->arma = 1;
      }

      if (cenario[jack->posx][jack->posy - 1] == 'P') {

        if (jack->balas == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 1) {
          jack->balas--;
        }
        
      }

      if (cenario[jack->posx][jack->posy - 1] == 'N') {
        next_stage = 1;
      }
      cenario[jack->posx][jack->posy] = '_';
      jack->posy--;
      cenario[jack->posx][jack->posy] = 'J';
    }
    break;
  case 's':
    if (jack->posx + 1 < tam) {

      if (cenario[jack->posx + 1][jack->posy] == 'O') {
        break;
      }

      if (cenario[jack->posx + 1][jack->posy] == 'B') {
        jack->balas++;
      }

      if (cenario[jack->posx + 1][jack->posy] == 'A') {
        jack->arma = 1;
      }

      if (cenario[jack->posx + 1][jack->posy] == 'P') {

        if (jack->balas == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 1) {
          jack->balas--;
        }
       
      }

      if (cenario[jack->posx + 1][jack->posy] == 'N') {
        next_stage = 1;
      }
      cenario[jack->posx][jack->posy] = '_';
      jack->posx++;
      cenario[jack->posx][jack->posy] = 'J';
    }
    break;
  case 'd':
    if (jack->posy + 1 < tam) {

      if (cenario[jack->posx][jack->posy + 1] == 'O') {
        break;
      }

      if (cenario[jack->posx][jack->posy + 1] == 'B') {
        jack->balas++;
      }

      if (cenario[jack->posx][jack->posy + 1] == 'A') {
        jack->arma = 1;
      }

      if (cenario[jack->posx][jack->posy + 1] == 'P') {

        if (jack->balas == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 0) {
          printf("Jack foi preso! ");
          jack->vida = 0;
        }
        if (jack->balas > 0 && jack->arma == 1) {
          jack->balas--;
        }
        
      }

      if (cenario[jack->posx][jack->posy + 1] == 'N') {
        next_stage = 1;
      }
      cenario[jack->posx][jack->posy] = '_';
      jack->posy++;
      cenario[jack->posx][jack->posy] = 'J';
    }
    break;
  }

  return next_stage;
}

void preencherCenarioBatalha(int tam, char cenario[tam][tam]) {
  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      cenario[i][j] = '_';
    }
  }
}

void imprimirCenarioBatalha(char cenario[10][10]) {
  printf("0 1 2 3 4 5 6 7 8 9\n");
  printf("# # # # # # # # # #\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c ", cenario[i][j]);
    }
    printf("\n");
  }
  printf("# # # # # # # # # #\n");
  printf("0 1 2 3 4 5 6 7 8 9");
}

void posicionarJack(char cenario[10][10], int quantidade) {
  for (int i = 0; i < quantidade;) {
    int posx = rand() % 10;
    int posy = rand() % 10;
    if (cenario[posx][posy] == '_') {
      cenario[posx][posy] = 'J';
      i++;
    }
  }
}

void posicionarSalazar(char cenario[10][10], int quantidade) {
  for (int i = 0; i < quantidade;) {
    int posx = rand() % 10;
    int posy = rand() % 10;
    if (cenario[posx][posy] == '_' && posy + 1 < 10) {
      cenario[posx][posy] = 'S';
      cenario[posx][posy + 1] = 'S';
      i++;
    }
  }
}

void imprimirParaJogador1(char cenario[10][10]) {
  printf("0 1 2 3 4 5 6 7 8 9\n");
  printf("# # # # # # # # # #\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (cenario[i][j] == 'S') {
        printf("_ ");
      } else {
        printf("%c ", cenario[i][j]);
      }
    }
    printf("\n");
  }
  printf("# # # # # # # # # #\n");
  printf("0 1 2 3 4 5 6 7 8 9");
}

void imprimirParaJogador2(char cenario[10][10]) {
  printf("0 1 2 3 4 5 6 7 8 9\n");
  printf("# # # # # # # # # #\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (cenario[i][j] == 'J') {
        printf("_ ");
      } else {
        printf("%c ", cenario[i][j]);
      }
    }
    printf("\n");
  }
  printf("# # # # # # # # # #\n");
  printf("0 1 2 3 4 5 6 7 8 9");
}

void destruirEmbarcacao(char cenario[10][10], int x, int y, Jack *jack,
                        Salazar *salazar) {

  

  if (cenario[x][y] == 'S' && y == 9) {
    cenario[x][y] = '_';
    cenario[x][y - 1] = '_';
    salazar->embarcacoes--;
  }
  if (cenario[x][y] == 'S' && y < 9) {
    cenario[x][y] = '_';
    cenario[x][y + 1] = '_';
    salazar->embarcacoes--;
  }
  if (cenario[x][y] == 'J') {
    cenario[x][y] = '_';
    jack->embarcacoes--;
  }
}

int main(void) {

  srand(time(NULL));

  int tam = 20;
  char cenario[tam][tam];

  Jack jack;
  jack.balas = 0;
  jack.arma = 0;
  jack.vida = 1;

  preencherCenario(tam, cenario);
  // imprimirCenario(tam,cenario);

  // Setando a posição de Jack e do Navio
  jack.posx = 0;
  jack.posy = 0;
  int posx_Navio = 19;
  int posy_Navio = 19;
  cenario[jack.posx][jack.posy] = 'J';
  cenario[posx_Navio][posy_Navio] = 'N';
  int piratas = 60;
  int *p = &piratas;
  
  // imprimirCenario(tam,cenario);

  // Posicionando as entidades
  posicionarPiratasAoRedor(tam, cenario, posx_Navio, posy_Navio);
  posicionarEntidades(tam, cenario, 'P', 50);
  posicionarEntidades(tam, cenario, 'O', 50);
  posicionarEntidades(tam, cenario, 'B', 20);
  posicionarEntidades(tam, cenario, 'A', 1);

  int next_stage = 0;

  do {

    printf("\n\nBalas: %d\n", jack.balas);
    printf("Arma: %d\n", jack.arma);
    printf("Posicao de Jack: (%d,%d) \n", jack.posx, jack.posy);
    printf("Obstáculos: %d\n",50);
    imprimirCenario(tam, cenario);

    char tecla;
    scanf("%c", &tecla);
    getchar();

    next_stage = movimentacao(tam, cenario, tecla, &jack);

  } while (jack.vida == 1 && next_stage == 0);
  if (jack.vida == 1 && next_stage == 1) {
    printf("\n\n********Bem-Vindo ao próximo nível!********\n\n");

    // Posicionando entidades
    int tam = 10;
    char cenario1[tam][tam];
    int vencedor = 0;
    Salazar salazar;

    preencherCenarioBatalha(tam, cenario1);
    posicionarJack(cenario1, 1);
    posicionarSalazar(cenario1, 5);

    // imprimirParaJogador1(cenario1);
    // printf("\n\n");
    // imprimirParaJogador2(cenario1);
    // printf("\n\n");
    // imprimirCenarioBatalha(cenario1);

    jack.embarcacoes = 1;
    salazar.embarcacoes = 5;
    // int destruidosPor

    int vez = 0;
    do {
      // Vez do jogador 1
      do {
        if (jack.embarcacoes == 0) {
          printf("\n\nFim de jogo! O jogador 2 venceu!\n\n");
          exit(1);
        }
        int x, y;
        printf("Agora é a vez do jogador 1!\n");
        imprimirParaJogador1(cenario1);
        printf("\n");
        printf("Onde deseja realizar o ataque?(x,y): ");
        scanf("%d,%d", &x, &y);
        getchar();
        destruirEmbarcacao(cenario1, x, y, &jack, &salazar);
        printf("\n\n");
        // imprimirParaJogador1(cenario1);
        // printf("\n\n");
        vez = 1;
      } while (vez != 1);
      // Vez do jogador 2
      do {
        if (salazar.embarcacoes == 0) {
          printf("\n\nFim de jogo! O jogador 1 venceu!\n\n");
          exit(1);
        }
        vez = 0;
        int x, y;
        printf("Agora é a vez do jogador 2!\n");
        imprimirParaJogador2(cenario1);
        printf("\n");
        printf("Onde deseja realizar o ataque?(x,y): ");
        scanf("%d,%d", &x, &y);
        getchar();
        destruirEmbarcacao(cenario1, x, y, &jack, &salazar);
        // printf("\n\n");
        // imprimirParaJogador2(cenario1);
        printf("\n\n");
        vez = 1;
      } while (vez != 1);

    } while (vencedor == 0);
  } else {
    printf("\n\nO jogo acabou! :(\n\n");
  }
}
