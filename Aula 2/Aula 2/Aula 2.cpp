#include "pch.h"
#include <iostream>


// Breakpoin F9
// Executar com o Debug F5
// passo-a-passo(s/detalhes) F10
// passo-a-passo(c/detalhes) F11

void capitaoplaneta()
{
	printf("Vai PLANETTTTAAAAAAA!!!!!!!!!!!\n");
}

int Somar2Valores(int x, int y)
{
	int c;
	c = x + y;
	return c;
}

int main()
{
	capitaoplaneta();

	int a = Somar2Valores(5, 6);
	printf("resultado da soma: %i \n", a);
	
	system("pause");

}


