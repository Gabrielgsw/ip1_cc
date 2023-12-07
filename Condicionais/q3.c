#include <stdio.h>

int main(void){

    int a,b;

    printf("Digite dois valores seguidos: ");
    scanf("%i %i",&a,&b);

    if(a%b == 0){
        printf("A é divisível por b! ");
    }else{
        printf("A nao eh divisivel por b! ");
    }

}   