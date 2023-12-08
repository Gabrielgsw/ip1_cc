#include <stdio.h>
#include <string.h>

// Crie um programa que armazena o nome e o salário de 10 funcionários. Imprima na tela o nome e o salário das pessoas que possuem o maior e o menor salário .
int main(void){

    int tam = 10, qtdCaracteres = 100;
    float salario[tam];
    char nomes[tam][qtdCaracteres];

    for(int i = 0;i<tam;i++){
        printf("Digite o nome do funcionario %i: ",i+1);
        scanf("%s[^\n]",nomes[i]);
        getchar();
        printf("\n");
        printf("Digite o salario do funcionario %i: ",i+1);
        scanf("%f",&salario[i]);
    }

}