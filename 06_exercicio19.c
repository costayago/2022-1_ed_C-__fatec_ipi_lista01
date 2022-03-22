/*LISTA 02
19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou
5, mas nao simultaneamente pelos dois. */ 

#include <stdio.h>

int main(){
    int num;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);

    if (num % 3 == 0 && num % 5 == 0){
        printf("%d e divisivel por 3 ou por 5", num);
    }
    else if(num % 3 != 0 && num % 5 == 0){
        printf("%d e divisivel apenas por 5", num);
    }
    else if (num % 5 != 0 && num % 3 == 0) {
         printf("%d e divisivel apenas por 3", num);
    }
    else{
        printf("%d nao e divisivel nem por 3 nem por 5", num);
    }
       return 0;
}