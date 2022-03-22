/*LISTA 01
 46. Faça um programa que leia um numero inteiro positivo de três dígitos (de 100 a 999).
Gere outro número formado pelos dígitos invertidos do numero lido. 
Exemplo: 
NumeroLido = 123 
NumeroGerado = 321. */

#include <stdio.h>

int main(){
    int num, unidade, dezena, centena;

    printf ("Informe um numero inteiro positivo de 3 digitos: ");
    scanf ("%d", &num);

    centena = num / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;

    printf ("%d em sua forma invertida = %d%d%d", num, unidade, dezena, centena);

    return 0;
}