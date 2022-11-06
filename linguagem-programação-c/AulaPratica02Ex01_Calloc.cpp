#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

#define TAM 4
#define SAIR exit(1)

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* px;

	px = (int*) calloc(TAM, sizeof(int));

	if (px == NULL)
	{
		printf("\nERRO! Não há memória suficiente!\n\n");
		SAIR;
	}

	for (int i = 0; i < TAM; i++)
	{
		printf("Digite o valor de px[%d]: ", i + 1);
		scanf_s("%d", &px[i]);
	}

	printf("\n\n=== VALORES DE PX ===\n\n");
	for (int i = 0; i < TAM; i++)
		printf("px[%d] = %d\n", i + 1, px[i]);
	printf("\n\n");

	free(px);

	system("pause");
	return 0;
}