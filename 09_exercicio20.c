/*  20. Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá
ser informado o número de dados lidos e número de valores pares. O processo termina
quando for digitado o numero 1000.
*/
#include <stdio.h>

int main() {
	int soma=0, par=0, impar=0;
    int num;
     
    while (num != 1000)
    {   
        printf ("Informe numeros inteiros, caso queira sair digite 1000: ");
        scanf("%d", &num);

        if (num % 2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }
    }
    
    soma = par + impar;
    printf ("numeros pares: %d | numeros impares: %d \n total %d valores informados", par, impar, soma); 

    return 0;  
}





   