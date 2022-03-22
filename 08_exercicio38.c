#include "stdio.h"

//Função verifica se o ano é Bissexto
	int isAnoBissexto(int ano){
		if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
			return 1;
		return 0;
	}

	int dateValidator(int dia, int mes, int ano){
		const int anoAtual = 2018;
		const int mesAtual = 3;

		if (ano > anoAtual){
			return 1;
		}else if(ano == anoAtual && mes > mesAtual) return 1;

		if (mes < 1 || mes > 12) return 1;

		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			return (dia < 1 || dia > 31) ? 1 : 0;
		} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
			return (dia < 1 || dia > 30) ? 1 : 0;
		}else{
			if (isAnoBissexto(ano)){
				return (dia < 1 || dia > 29) ? 1 : 0;
			}else
				return (dia < 1 || dia > 28) ? 1 : 0;
		}
		return 0;
	}

int main(int argc, char const *argv[])
{
	int dia,mes,ano;

	printf("Informe dia de nascimento:" );
	scanf("%d",&dia);
	printf("Informe o mes de nascimento:");
	scanf("%d",&mes);
	printf("Informe o ano de nascimento:");
	scanf("%d",&ano);

	if(dateValidator(dia,mes,ano))
		printf("\nData de nascimento invalida\n");
	else
		printf("\nData de nascimento valida\n");

	return 0;
}