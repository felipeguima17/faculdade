#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

#define TAM 6

typedef struct cadastro
{
	char nome[40];
	char cpf[15];
	char telefone[15];
	char email[30];
};

void registra(cadastro* p);
void imprime(cadastro* p);
void gravarCSV(cadastro* p);

int main()
{
	cadastro pessoa[TAM];

	registra(pessoa);
	system("pause");
	system("cls");
	imprime(pessoa);
	gravarCSV(pessoa);

	printf("\n\n");
	system("pause");
	return 0;
}

// Insere os registros. Repete até a string não ser vazia.
void registra(cadastro* p)
{
	for (int i = 0; i < TAM; i++)
	{
		printf("CADASTRO - PESSOA %d\n\n", i + 1);
		do
		{
			printf("Digite o nome: ");
			gets_s(p[i].nome);
		} while (p[i].nome[0] == '\0');
		do
		{
			printf("Digite o cpf: ");
			gets_s(p[i].cpf);
		} while (p[i].cpf[0] == '\0');
		do
		{
			printf("Digite o telefone: ");
			gets_s(p[i].telefone);
		} while (p[i].telefone[0] == '\0');
		do
		{
			printf("Digite o email: ");
			gets_s(p[i].email);
		} while (p[i].email[0] == '\0');
		printf("\n\n-------------------------------------------\n");
	}
}

// imprime os registros na tela
void imprime(cadastro *p)
{
	for (int i = 0; i < TAM; i++)
	{
		printf("PESSOA %d\n\n", i + 1);
		printf("%s\n", p[i].nome);
		printf("%s\n", p[i].cpf);
		printf("%s\n", p[i].telefone);
		printf("%s\n", p[i].email);
		printf("---------------------------------------------\n");
	}
}

// gera um arquivo .csv com os registros que foram cadastrados
void gravarCSV(cadastro* p)
{
	errno_t err;

	FILE* arquivo;

	err = fopen_s(&arquivo, "1371185.csv", "r");

	fputs("Nome;CPF;Telefone;email\n", arquivo);
	if (err == 0)
	{
		for (int i = 0; i < TAM; i++)
		{
			fputs(p[i].nome, arquivo);
			fputs(";", arquivo);
			fputs(p[i].cpf, arquivo);
			fputs(";", arquivo);
			fputs(p[i].telefone, arquivo);
			fputs(";", arquivo);
			fputs(p[i].email, arquivo);
			fputs(";", arquivo);
			fputs("\n", arquivo);
		}
	}
	else
		printf("ERRO! Arquivo não existe!");
	fclose(arquivo);
	printf("\nOs cadastros foram salvos no arquivo 1371185.csv\n\n");
}