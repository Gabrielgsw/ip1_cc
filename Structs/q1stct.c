#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct 
{

    char nome[100], cpf[12];    
    float altura,peso;
    int sexo;    
}Pessoa;


int main(void){

    Pessoa p1,p2,p3,p4,p5;

    int count = 0;

    do{




    }while(count != 5);







}


void cadastrar(Pessoa p){

    printf("Digite o seu nome: ");
    fgets(p.nome,100,stdin);
    getchar();
    printf("\nDigite o seu cpf: ");
    fgets(p.cpf,12,stdin);
    getchar();
    printf("\nDigite sua altura: ");
    scanf("%f",&p.altura);
    getchar();
    printf("\nDigite seu peso: ");
    scanf("%f",&p.peso);
    getchar();
    printf("\nDigite seu sexo(0 para masculino e 1 para feminino): ");
    scanf("%d",&p.sexo);
    getchar();

}