#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
  char nome[50], codigo_produto[15];
  int quantidade_disponivel, n_vendas, n_compras, status, preco;

} Produto;

void inserirEmArquivo(FILE *f, Produto *produtos, int tamanho) {
  f = fopen("cliente.txt", "wb");
  if (f == NULL) {
    printf("Arquivo não encontrado, encerrando o programa! ");
    exit(1);
  }
  // Percorrendo o vetor de produtos e escrevendo no arquivo
  for (int i = 0; i < tamanho; i++) {
    fwrite(&produtos[i], sizeof(Produto), 1, f);
  }

  // fwrite(const void *restrict ptr, size_t size, size_t n, FILE *restrict s)
}

void preencherProduto(Produto *produtos, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    produtos[i].quantidade_disponivel = 0;
    produtos[i].n_compras = 0;
    produtos[i].n_vendas = 0;
    produtos[i].status = 0;
    produtos[i].preco = 0;
    strcpy(produtos[i].nome, " ");
    strcpy(produtos[i].codigo_produto, " ");
  }
}

int inserir(Produto *produtos, int tamanho, int posicao, Produto novo) {
  // novo.quantidade_disponivel = 0;
  // novo.status = 1;
  // novo.n_compras = 0;
  // novo.n_vendas = 0;
  //  Verificando se o código já existe
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].codigo_produto, novo.codigo_produto) == 0) {
      printf("Não foi possível inserir este produto, pois já existe um produto "
             "com o mesmo código! \n");
      return 0;
    }
  }
  strcpy(produtos[posicao].nome, novo.nome);
  strcpy(produtos[posicao].codigo_produto, novo.codigo_produto);
  produtos[posicao].preco = novo.preco;
  produtos[posicao].quantidade_disponivel = novo.quantidade_disponivel;
  produtos[posicao].n_compras = novo.n_compras;
  produtos[posicao].n_vendas = novo.n_vendas;
  produtos[posicao].status = novo.status;
  printf("Produto inserido com sucesso! \n");
  return 1;
}

int remover(Produto *produtos, int tamanho, char codigo[]) {
  // Verificar se o produto existe
  // char *p;
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].codigo_produto, codigo) == 0) {
      produtos[i].status = 0;
      strcpy(produtos[i].codigo_produto, " ");
      strcpy(produtos[i].nome, " ");
      printf("\nProduto removido com sucesso! \n");
      return 1;
    }
  }
  printf("\nNão foi possível remover este produto, pois ele não existe ou "
         "já foi removido!\n");

  // printf("Produto removido com sucesso! \n");

  return 0;
}

int buscar(Produto *produtos, int tamanho, char codigo[]) {
  // Buscar o produto
  for (int i = 0; i < tamanho; i++) {
    if ((strcmp(produtos[i].codigo_produto, codigo) == 0) &&
        produtos[i].status > 0) {
      printf("\nNome do produto: %s\n", produtos[i].nome);
      printf("Código do produto: %s\n", produtos[i].codigo_produto);
      printf("Status do produto: %d\n", produtos[i].status);
      printf("Preço do produto: %d\n", produtos[i].preco);
      printf("Quantidade de compras do produto: %d\n", produtos[i].n_compras);
      printf("Quantidade no estoque do produto: %d\n",
             produtos[i].quantidade_disponivel);
      printf("Vendas do produto: %d\n", produtos[i].n_vendas);
      return i;
    } else if (produtos[i].status == 0) {
      printf("\nO produto não existe ou foi removido! \n");
      return -1;
    }
  }
  return -1;
}

int comprar(Produto *produtos, int tamanho, char codigo[]) {
  // Verificar se o produto existe
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].codigo_produto, codigo) == 0) {
      if (produtos[i].status != 0) {
        produtos[i].quantidade_disponivel++;
        produtos[i].n_compras++;
        return 1;
      }
    }
  }
  return 0;
}

int vender(Produto *produtos, int tamanho, char codigo[]) {
  // Verificar existencia
  for (int i = 0; i < tamanho; i++) {
    if ((strcmp(produtos[i].codigo_produto, codigo) == 0) &&
        produtos[i].quantidade_disponivel > 0) {
      if (produtos[i].status != 0) {
        produtos[i].quantidade_disponivel--;
        produtos[i].n_vendas++;
        return 1;
      }
    }
  }
  return 0;
}

void ordenarPorVendas(Produto *produtos, int tamanho) {
  int aux = 0;
  // Percorrendo os elementos e ordenando
  for (int i = 0; i < tamanho; i++) {
    for (int j = i; j < tamanho; j++) {
      if (produtos[i].n_vendas > produtos[j].n_vendas) {
        aux = produtos[i].n_vendas;
        produtos[i].n_vendas = produtos[j].n_vendas;
        produtos[j].n_vendas = aux;
      }
    }
  }

  // Imprimindo os elementos ordenados
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].nome, " ") == 0) {
      printf(" ");
    } else {
      printf("\nProduto %s || Código: %s || Número de vendas: %d\n",
             produtos[i].nome, produtos[i].codigo_produto,
             produtos[i].n_vendas);
    }
  }
}

void ordenarPorCompra(Produto *produtos, int tamanho) {
  int aux = 0;
  for (int i = 0; i < tamanho; i++) {
    for (int j = i; j < tamanho; j++) {
      if (produtos[i].n_compras > produtos[j].n_compras) {
        aux = produtos[i].n_compras;
        produtos[i].n_compras = produtos[j].n_compras;
        produtos[j].n_compras = aux;
      }
    }
  }

  // Imprimindo os elementos ordenados
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].nome, " ") == 0) {
      printf(" ");
    } else {
      printf("\nProduto %s || Código: %s || Número de compras: %d\n",
             produtos[i].nome, produtos[i].codigo_produto,
             produtos[i].n_compras);
    }
  }
}

void ExtratoConta(Produto *produtos, int tamanho) {
  // Percorrendo os produtos
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].nome, " ") == 0) {
      printf(" ");
    } else {
      printf("\nProduto: %s || Compras: %d || Vendas: %d || Saldo: %d\n",
             produtos[i].nome, produtos[i].n_compras, produtos[i].n_vendas,
             (((produtos[i].preco) * produtos[i].n_vendas) -
              (produtos[i].preco * produtos[i].n_compras)));
    }
  }
}

void produtosDisponiveis(Produto *produtos, int tamanho) {
  // Percorrendo
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(produtos[i].nome, " ") == 0) {
      printf(" ");
    } else if ((produtos[i].quantidade_disponivel > 0)) {
      printf("\nProduto disponível: %s\n", produtos[i].nome);
    }
  }
}

void Imprimirmenu(Produto *produtos, int tamanho, Produto p) {
  int opcao, escolha, posicao;
  printf("\n\n----------Menu da padaria Ruralinda----------\n\n");
  printf("1 - Inserir produto\n");
  printf("2 - Remover produto\n");
  printf("3 - Buscar produto\n");
  printf("4 - Comprar produto\n");
  printf("5 - Vender produto\n");
  printf("6 - Gerar relatório\n");
  printf("7 - Sair\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &opcao);
  getchar();

  switch (opcao) {
  case 1:
    printf("\nDigite o nome do produto: ");
    fgets(p.nome, 50, stdin);
    // getchar();
    printf("\nDigite o código do produto: ");
    fgets(p.codigo_produto, 15, stdin);
    // getchar();
    printf("\nDigite o preço do produto: ");
    scanf("%d", &p.preco);
    // getchar();
    printf("\nDigite a posição onde será inserido o produto: ");
    scanf("%d", &posicao);
    p.quantidade_disponivel = 0;
    p.n_compras = 0;
    p.n_vendas = 0;
    p.status = 1;
    // getchar();
    inserir(produtos, tamanho, posicao, p);
    Imprimirmenu(produtos, tamanho, p);
    break;
  case 2:
    printf("\nDigite o código do produto que voce deseja remover: ");
    fgets(p.codigo_produto, 15, stdin);
    // getchar();
    remover(produtos, tamanho, p.codigo_produto);
    Imprimirmenu(produtos, tamanho, p);
    break;
  case 3:
    printf("\nDigite o código do produto que você quer buscar: ");
    fgets(p.codigo_produto, 15, stdin);
    // getchar();
    buscar(produtos, tamanho, p.codigo_produto);
    Imprimirmenu(produtos, tamanho, p);
    break;
  case 4:
    printf("\nDigite o código do produto que foi comprado: ");
    fgets(p.codigo_produto, 15, stdin);
    // getchar();
    comprar(produtos, tamanho, p.codigo_produto);
    Imprimirmenu(produtos, tamanho, p);
    break;
  case 5:
    printf("\nDigite o código do produto que foi vendido: ");
    fgets(p.codigo_produto, 15, stdin);
    // getchar();
    vender(produtos, tamanho, p.codigo_produto);
    Imprimirmenu(produtos, tamanho, p);
    break;
  case 6:
    // Gerar relatório
    printf("\n\n----------Escolha a opção de relatório que voce "
           "deseja----------\n\n");
    printf("1 -Lista ordenada dos produtos mais vendidos\n");
    printf("2 -Lista ordenada dos produtos mais comprados \n");
    printf("3 -Extrato da conta da padaria \n");
    printf("4 -Produtos em estoque \n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &escolha);
    // getchar();
    getchar();
    switch (escolha) {
    case 1:
      ordenarPorVendas(produtos, tamanho);
      Imprimirmenu(produtos, tamanho, p);
      break;
    case 2:
      ordenarPorCompra(produtos, tamanho);
      Imprimirmenu(produtos, tamanho, p);
      break;
    case 3:
      ExtratoConta(produtos, tamanho);
      Imprimirmenu(produtos, tamanho, p);
      break;
    case 4:
      produtosDisponiveis(produtos, tamanho);
      Imprimirmenu(produtos, tamanho, p);
      break;
    }

  case 7:
    printf("\nEncerrando programa! ");
    exit(1);
    break;
  default:
    printf("\nOpção inválida! \n");
  }
}

int main(void) {

  FILE *f = fopen("clientes.txt", "wb");

  int tam = 50;
  Produto produtos[tam];
  Produto p, p1;

  // Iniciando o vetor de produtos
  preencherProduto(produtos, tam);
  // strcpy(p.nome, "Mouse");
  // strcpy(p.codigo_produto, "1235");
  // p.preco = 10;
  // p.n_vendas = 0;
  // inserir(produtos, tam, 0, p);
  // printf("\n%d", ret);
  // ret = buscar(produtos, tam, "1235");
  // printf("\n%d", ret);
  // ret = buscar(produtos,tam,"123");
  // printf("\n%d",ret);
  // ret = comprar(produtos, tam, "1235");
  // printf("\n%d", ret);
  // ret = buscar(produtos, tam, "1235");
  // printf("\n%d", ret);

  // Inserindo novo produto
  // strcpy(p1.nome, "Pao");
  // strcpy(p1.codigo_produto, "123");
  // p1.preco = 1;
  // p1.n_vendas = 0;
  // inserir(produtos, tam, 1, p1);

  // Inserindo em arquivo
  inserirEmArquivo(f, produtos, tam);

  Imprimirmenu(produtos, tam, p);

  fclose(f);
}