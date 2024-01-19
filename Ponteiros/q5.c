#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct

{

  char nome[10];

  int idade;

  float notas[3];

}Aluno;



int main(void){

    Aluno a;

    Aluno* pa = &a;

  //CRIE UM CÓDIGO QUE PREENCHA OS CAMPOS DO ALUNO, USANDO O PONTEIRO

    printf("Digite o nome do aluno: ");
    fgets(*pa->nome,10,stdin);
    printf("\n");
    printf("Digite a idade do aluno: ");
    scanf("%d",*pa->idade);
    printf("\n");
    for(int i = 0;i<3;i++){
        printf("Digite a nota %d: ",i+1);
        scanf("%f",*(pa+i)->notas);
        printf("\n");
    }


}