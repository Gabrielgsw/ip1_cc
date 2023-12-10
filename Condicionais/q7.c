#include <stdio.h>

int main(void){

    float r,c1,c2,p1,p2;

    printf("Digite o raio da circunferencia: ");
    scanf("%f",&r);
    printf("\n");
    printf("Digite as coordenadas do centro (x,y): ");
    scanf("%f,%f",&c1,&c2);
    printf("\n");
    printf("Digite as coordenadas de um ponto (x,y): ");
    scanf("%f,%f",&p1,&p2);

    if(p1<=(r-c1) && p2<=(r-c2)){
        printf("Estah dentro! ");
    }else{
        printf("Estah fora!");
    }

}