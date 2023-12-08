#include <stdio.h>

int main(void){

    float nota1,nota2,nota3,media;

    printf("Digite 3 notas: ");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    
    media = (nota1+nota2+nota3)/3.0;

    if(media >= 7){
        printf("Voce foi aprovado! ");
    }else{
        printf("Voce nao foi aprovado! ");
    }

}