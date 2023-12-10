#include <stdio.h>
#include <math.h>


int main(void){
    
    int quantidadeHabitantes,filhos;
    float mediaSalarial = 0, mediaFilhos, maiorSalario = 0, menorSalario = 9999999999999, salario, percentFilhos = 0;

    printf("Digite a quantidade de habitantes: ");
    scanf("%i",&quantidadeHabitantes);

    for(int i = 0;i<quantidadeHabitantes;i++){
        printf("Digite o salário do habitante %i: ",i+1);
        scanf("%f",&salario);
        getchar();
        if(salario>maiorSalario){
            maiorSalario = salario;
            
        }if(salario<menorSalario){
            menorSalario = salario;
        }
        mediaSalarial+=salario;
        printf("\n");
        printf("Digite o numero de filhos do habitante %i:",i+1);
        scanf("%i",&filhos);
        getchar();
        if(filhos>=2){
            percentFilhos++;
        }
        mediaFilhos+=filhos;
        printf("\n");
        
    }

    printf("A media salarial da populacao eh: %.2f\n",mediaSalarial/quantidadeHabitantes);
    printf("A media de filhos da populacao eh: %.2f\n",mediaFilhos/quantidadeHabitantes);
    printf("O maior salario eh: %.2f e o menor salario eh: %.2f\n",maiorSalario,menorSalario);
    printf("O percentual de habitantes com mais de 2 filhos eh %.2f",(percentFilhos/quantidadeHabitantes));


}