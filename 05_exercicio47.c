//LISTA 01
// 47. Leia um numero inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

#include <stdio.h>

int main(){
    int num, unidade, dezena, centena, milhar;

    printf ("Digite um numero de 4 digitos (1000 - 9999): ");
    scanf ("%d", &num);

    milhar = (num / 1000);
    centena = (num % 1000) / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;

    printf ("%d\n\%d\n%d\n%d", milhar, centena, dezena, unidade);

    return 0;
}