//LISTA 01
//30. Leia um valor em real e a cotação do dolar. Em seguida, imprima o valor correspondente
//em dólares.

#include <stdio.h>

int main(){
    float dolar, real, res;

    printf("Digite o valor da cotacao do US$ (dolar) hoje: ");
    scanf("%f", &dolar);
    printf("Informe a quantidade em R$ (real): ");
    scanf("%f", &real);

    res = dolar * real;

    printf(" US$ %.2f US$ = R$ %.2f", dolar, res);

    return 0;
}