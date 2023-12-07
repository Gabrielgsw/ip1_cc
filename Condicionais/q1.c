#include <stdio.h>

int main(void) {
    int a, b;
    int soma = a + b;

    printf("Digite dois numeros a soma de dois numeros: ");
    scanf("%i+%i", &a, &b);


    if (soma > 10) {
        printf("%i + %i = %i", a, b, soma);
    }

   
}