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

	printf("Informe a matrícula do funcionário: ");
	scanf_s("%d", &funcionario.matricula);
	buf = getchar();
	printf("Informe o nome do funcionário: ");
	gets_s(funcionario.nome);
	printf("Informe o salário do funcionário: R$");
	scanf_s("%f", &funcionario.salario);

	printf("\n=== DADOS DO FUNCIONÁRIO ===\n\n");
	printf("Matrícula: %d\n", funcionario.matricula);
	printf("Nome: "); puts(funcionario.nome);
	printf("Salário: R$%.2f\n\n", funcionario.salario);

	system("pause");
	return 0;
}