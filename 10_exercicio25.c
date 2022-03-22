/* 25. Faça um programa que some todos os numeros naturais abaixo de 1000 que são múltiplos
de 3 ou 5. */

#include <stdio.h>

int main(){
    int i;
    int soma = 0;

    for(i=0; i<=1000; i++){
        if((i % 3 == 0) || (i % 5 == 0)){ 
            soma = soma + i;
        }
    }
    printf("A soma de todos os numeros naturais (0 - 1000) multiplos de 3 ou 5: %d ", soma);

    return 0;
}