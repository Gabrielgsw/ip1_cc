#include <stdio.h>

int main(void){

   float salario;

   printf("Digite o seu salario: ");
   scanf("%f",&salario);

   if(salario <= 1000){
    salario*=1.2;
   }else{
    salario*=1.1;
   }

   printf("\n\nNOVO SALARIO: %.2f",salario);

}