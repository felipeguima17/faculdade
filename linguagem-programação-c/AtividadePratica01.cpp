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


	printf("Digite o nome do funcion�rio: ");
	fgets((*p_func).nome, TAM, stdin);

	do
	{
		printf("Digite o sal�rio do funcion�rio: R$");
		scanf_s("%lf", &(*p_func).salario);
	} while ((*p_func).salario < 0); // evita a inser��o de um sal�rio negativo
	

	system("CLS");

	// imprime os dados digitados, al�quota e valor a ser deduzido do sal�rio
	printf("----------------------------------------------\n");
	printf("Nome: %s", (*p_func).nome);
	printf("Salario: R$%.2f\n", (*p_func).salario);

	if ((*p_func).salario >= 0 and (*p_func).salario <= 1903.98)
	{
		printf("Al�quota do IR: isento\n");
		printf("Valor a ser reduzido do sal�rio = R$0,00\n");
	}
	else if ((*p_func).salario >= 1903.99 and (*p_func).salario <= 2826.65)
	{
		printf("Al�quota do IR: 7,50%%\n");
		printf("Valor a ser reduzido do sal�rio = R$%.2f\n", (*p_func).salario * 7.5 / 100);
	}
	else if ((*p_func).salario >= 2826.66 and (*p_func).salario <= 3751.05)
	{
		printf("Al�quota do IR: 15,00%%\n");
		printf("Valor a ser reduzido do sal�rio = R$%.2f\n", (*p_func).salario * 15.0 / 100);
	}
	else if ((*p_func).salario >= 3751.06 and (*p_func).salario <= 4664.68)
	{
		printf("Al�quota do IR: 22,50%%\n");
		printf("Valor a ser reduzido do sal�rio = R$%.2f\n", (*p_func).salario * 22.5 / 100);
	}
	else if ((*p_func).salario >= 4664.69)
	{
		printf("Al�quota do IR: 27,50%%\n");
		printf("Valor a ser reduzido do sal�rio = R$%.2f\n", (*p_func).salario * 27.5 / 100);
	}
	printf("----------------------------------------------\n\n");

	system("pause");
	return 0;
}