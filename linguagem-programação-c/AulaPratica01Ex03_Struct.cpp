#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef struct pessoa
	{
		int matricula;
		char nome[30];
		float salario;
	};

	pessoa funcionario;
	char buf = NULL;

	printf("Informe a matr�cula do funcion�rio: ");
	scanf_s("%d", &funcionario.matricula);
	buf = getchar();
	printf("Informe o nome do funcion�rio: ");
	gets_s(funcionario.nome);
	printf("Informe o sal�rio do funcion�rio: R$");
	scanf_s("%f", &funcionario.salario);

	printf("\n=== DADOS DO FUNCION�RIO ===\n\n");
	printf("Matr�cula: %d\n", funcionario.matricula);
	printf("Nome: "); puts(funcionario.nome);
	printf("Sal�rio: R$%.2f\n\n", funcionario.salario);

	system("pause");
	return 0;
}