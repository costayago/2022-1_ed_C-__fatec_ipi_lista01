/* 44. Leia um numero positivo do usuário, então, calcule e
 imprima a sequência Fibonacci até o primeiro numero superior 
 ao número lido. Exemplo: se o usuário informou o número 30, 
 a sequencia a ser impressa ser a 0 1 1 2 3 5 8 13 21 34. */

#include <stdio.h>
#include <stdlib.h>
int main() {

	int i, n ,t1 = 0, t2 = 1 , proxTermo;
	
	printf("Informe a quantidade de termos:  ");
	scanf("%i", &n);
	
	printf("SERIE DE FIBONACCI \n  ");
	
	
	for (i = 1; i <= n; ++i) {  // Percorrendo os valores
		printf("%i, ", t1);;
		
		proxTermo = t1 + t2; // 0, 1 , proxTermo = 1 
		t1 = t2;
		t2 = proxTermo;
				
		}

   return 0;
}










