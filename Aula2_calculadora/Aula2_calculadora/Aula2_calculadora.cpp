#include "pch.h"
#include <iostream>

int Soma(int x, int y)
{
  	int c;
	c = x + y;
	return c;
}


int Multiplicacao(int x, int y)
{
	int c;
	c = x * y;
	return c;
}

int Divisao(int x, int y)
{
	int c;
	c = x / y;
	return c;
}

int Subtracao(int x, int y)
{
	int c;
	c = x - y;
	return c;
}

int LerNumeroInteiro()
{
	printf("\nFavor digitar um numero inteiro: ");
    int numero;
    scanf_s("%i", &numero);
    return numero;
}

int Opcao()
{
	printf("\nEscolha uma opcao\n1.Soma\n2.Multiplicacao\n3.Divisao\n4.Subtracao\n");
	int opcao;
	printf("\nFavor digite o numero da operacao desejada: ");
	scanf_s("%i", &opcao);
	return opcao;
}


int main()
{
	
	int Operacao = Opcao();
		switch (Operacao)
	{
		case 1:
		{
			int a = LerNumeroInteiro();
			int b = LerNumeroInteiro();
			int d = Soma(a, b);
			printf("\nO valor da Soma eh: %i", d);
		}
		break;
		case 2: 
		{
			int a = LerNumeroInteiro();
			int b = LerNumeroInteiro();
			int d = Multiplicacao(a, b);
			printf("\nO valor da Multiplicacao eh: %i", d);
		}
		break;
		case 3:
		{
			int a = LerNumeroInteiro();
			int b = LerNumeroInteiro();
			int d = Divisao(a, b);
			printf("\nO valor da Divisao eh: %i", d);
		}
		break;
		case 4:
		{
			int a = LerNumeroInteiro();
			int b = LerNumeroInteiro();
			int d = Subtracao(a, b);
			printf("\nO valor da Subtracao eh: %i", d);
		}
		break;
		

		
	}

}

