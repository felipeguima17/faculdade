#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

#define TAM 5
#define SAIR exit(1)

int somaVetor(int v[], int tamanho);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int* px;
	int soma = 0;

	px = (int*)calloc(TAM, sizeof(int));

	if (px == NULL)
	{
		printf("\n\nERRO! Não há espaço suficiente!\n\n");
		SAIR;
	}

	// lendo valores no vetor
	for (int i = 0; i < TAM; i++)
	{
		printf("Digite o valor de px[%d]: ", i + 1);
		scanf_s("%d", &px[i]);
	}

	// imprimindo vetor
	printf("\n\n\n=== VETOR PX ===\n\n");
	for (int i = 0; i < TAM; i++)
	{
		printf("%d ", px[i]);
	}

	// mostra soma do vetor
	soma = somaVetor(px, TAM);
	printf("\n\nSOMA DOS VALORES = %d\n\n\n", soma);

	free(px);
	system("pause");
	return 0;
}

int somaVetor(int v[], int tamanho)
{
	if (tamanho == 1)
		return v[tamanho - 1];
	else
		return v[tamanho - 1] + somaVetor(v, tamanho - 1);
}