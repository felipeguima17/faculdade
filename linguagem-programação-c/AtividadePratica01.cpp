#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 60

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef struct cadastro
	{
		char nome[TAM];
		double salario;
	};

	float aliquota = 0.0;
	cadastro funcionario, *p_func;

	p_func = &funcionario;


	printf("Digite o nome do funcionário: ");
	fgets((*p_func).nome, TAM, stdin);

	do
	{
		printf("Digite o salário do funcionário: R$");
		scanf_s("%lf", &(*p_func).salario);
	} while ((*p_func).salario < 0); // evita a inserção de um salário negativo
	

	system("CLS");

	// imprime os dados digitados, alíquota e valor a ser deduzido do salário
	printf("----------------------------------------------\n");
	printf("Nome: %s", (*p_func).nome);
	printf("Salario: R$%.2f\n", (*p_func).salario);

	if ((*p_func).salario >= 0 and (*p_func).salario <= 1903.98)
	{
		printf("Alíquota do IR: isento\n");
		printf("Valor a ser reduzido do salário = R$0,00\n");
	}
	else if ((*p_func).salario >= 1903.99 and (*p_func).salario <= 2826.65)
	{
		printf("Alíquota do IR: 7,50%%\n");
		printf("Valor a ser reduzido do salário = R$%.2f\n", (*p_func).salario * 7.5 / 100);
	}
	else if ((*p_func).salario >= 2826.66 and (*p_func).salario <= 3751.05)
	{
		printf("Alíquota do IR: 15,00%%\n");
		printf("Valor a ser reduzido do salário = R$%.2f\n", (*p_func).salario * 15.0 / 100);
	}
	else if ((*p_func).salario >= 3751.06 and (*p_func).salario <= 4664.68)
	{
		printf("Alíquota do IR: 22,50%%\n");
		printf("Valor a ser reduzido do salário = R$%.2f\n", (*p_func).salario * 22.5 / 100);
	}
	else if ((*p_func).salario >= 4664.69)
	{
		printf("Alíquota do IR: 27,50%%\n");
		printf("Valor a ser reduzido do salário = R$%.2f\n", (*p_func).salario * 27.5 / 100);
	}
	printf("----------------------------------------------\n\n");

	system("pause");
	return 0;
}