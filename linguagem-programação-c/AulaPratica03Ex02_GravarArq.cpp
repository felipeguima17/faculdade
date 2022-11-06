#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	errno_t erro;
	FILE* arquivo;
	int num;

	erro = fopen_s(&arquivo, "abrir.txt", "w");

	if (erro != 0)
	{
		printf("ERRO! Arquivo não existe para ser lido!\n\n");
		exit(1);
	}

	else
	{
		printf("\nArquivo aberto!\n\n");
		printf("Digite um número inteiro: ");
		do
		{
			num = getchar();
			fputc(num, arquivo);
		} while (num != '\n');
		printf("\n\nValor gravado em um arquivo!\n\n");
	}

	if (arquivo)
	{
		erro = fclose(arquivo);
		if (erro == 0)
			printf("\n\nArquivo fechado!\n\n");
		else
			printf("\n\nArquivo não fechado!\n\n");
	}

	system("pause");
	return 0;
}