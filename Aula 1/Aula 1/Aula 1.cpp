// Aula 1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
// variaveis globais
int a; //  numeros inteiros
float b; // numeros reais (6 num)
double c; // numeros reais (muitos numeros)


int main()
{
 // variaveis locais
	char d; //caracteres
	bool e; // booleano (veredade  T ou falso F)

    printf("Hello World!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t"); // \n=espaço na linha \t como se fosse um TAB
	printf("oi meu caro amigo!\n");
	printf("Mostrando o valor %i \n", 5);
	printf("a soma de %i e %i eh: %i \n", 99, 10, 99 + 10);
	printf("Mostrando %f \n", 4.3);

	printf("olha soh este numero %i \n"); // erro, porque a memoria ram nao apaga nada
	
	int f;
	f = 8;
	a = f * 2;

	printf("resultado da multiplicacao de %i por 2 eh: %i \n", f, a);

	scanf_s("%i", &a);

	printf("\n\nValor digitado foi: %i\n\n", a);
	
	system("pause");
	return 0;
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
