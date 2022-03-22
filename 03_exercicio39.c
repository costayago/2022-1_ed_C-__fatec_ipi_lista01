/*LISTA01
 39. A importancia de R$ 780.000,00 será dividida entre três ganhadores de um concurso. 
Sendo que da quantia total:
• O primeiro ganhador recebera 46%; 
• O segundo recebera 32%; 
• O terceiro recebera o restante;  */ 

#include <stdio.h>

int main(){
    float res1, res2, res3;
    float total = 780.000;
    char nome1[10];
    char nome2[10];
    char nome3[10];

    printf("Informe o nome premiado em 1 lugar: ");
    scanf("%s", &nome1);

    printf("Informe o nome premiado em 2 lugar: ");
    scanf("%s", &nome2);

    printf("Informe o nome premiado em 3 lugar: ");
    scanf("%s", &nome3);

    res1 = total * 0.46;
    res2 = total * 0.32;
    res3 = total * 0.22;

    printf("\n%s - 1 lugar: R$ %.2f\n%s - 2 lugar: R$ %.2f\n%s - 3 lugar: R$ %.2f\n", nome1, res1, nome2, res2, nome3, res3);

    return 0;
}