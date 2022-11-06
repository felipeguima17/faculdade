#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

#define TAM 100

int main()
{
	setlocale(LC_ALL, "Portuguese");

	errno_t erro;
	FILE* arquivo;
	char texto[TAM];
	int ch, i;

	erro = fopen_s(&arquivo, "ler.txt", "r");

	if (erro != 0)
	{
		printf("ERRO! Arquivo não existe para ser lido!\n\n");
		exit(1);
	}

	else
	{
		printf("\nArquivo aberto!\n\n");
		ch = fgetc(arquivo);

		for (i = 0; i < TAM && (feof(arquivo) == 0); i++)
		{ 
			texto[i] = (char)ch;
			ch = fgetc(arquivo);
		}
		texto[i] = '\0';

		printf("%s\n\n", texto);
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