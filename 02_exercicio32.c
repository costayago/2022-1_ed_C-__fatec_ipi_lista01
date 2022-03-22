//LISTA 01
//32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de 
//seu dobro. 

#include <stdio.h>
int main(){
    int num, res;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);

    res = (3 * (num + 1) + (2 * (num -2)));

    printf("A soma de (3x(sucessor))+(2x(antecessor)) = %d", res);

    return 0;
};