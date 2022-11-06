#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 4

void le_matriz(int* mat);
void imprime_matriz(int* mat);
void calc_soma(int* mat_A, int* mat_B, int* mat_C);
void libera_espaco(int* mat_A, int* mat_B, int* mat_C);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int* matriz_A, * matriz_B, * matriz_C;
	int op;

	do // enquanto op for maior ou igual a zero, o usu�rio fica no loop
	{
		printf("Deseja somar matrizes? (Sim - digite um n�mero maior ou igual a zero | N�o - digite um n�mero negativo): ");
		scanf_s("%d", &op);
		if (op < 0)
		{
			break;
		}
		system("cls");

		// alocando matrizes dinamicamente em mem�ria com a fun��o malloc
		matriz_A = (int*)malloc(TAM * TAM * sizeof(int));
		if (matriz_A == NULL)
		{
			printf("ERRO! N�O H� MEM�RIA SUFICIENTE\n");
			exit(1);
		}
		matriz_B = (int*)malloc(TAM * TAM * sizeof(int));
		if (matriz_B == NULL)
		{
			printf("ERRO! N�O H� MEM�RIA SUFICIENTE\n");
			exit(1);
		}
		matriz_C = (int*)malloc(TAM * TAM * sizeof(int));
		if (matriz_C == NULL)
		{
			printf("ERRO! N�O H� MEM�RIA SUFICIENTE\n");
			exit(1);
		}

		// leitura das matrizes
		printf("::::MATRIZ A::::\n");
		le_matriz(matriz_A);
		system("cls");
		printf("::::MATRIZ B::::\n");
		le_matriz(matriz_B);
		system("cls");

		// soma das matrizes
		calc_soma(matriz_A, matriz_B, matriz_C);

		// impress�o das matrizes
		printf("::::MATRIZ A::::\n");
		imprime_matriz(matriz_A);
		printf("\n::::MATRIZ B::::\n");
		imprime_matriz(matriz_B);
		printf("\n::::MATRIZ C (SOMA DE A + B)::::\n");
		imprime_matriz(matriz_C);

		printf("\n\n\n");
		system("pause");
		printf("\n\n\n");

		// libera o espa�o alocado para as matrizes
		libera_espaco(matriz_A, matriz_B, matriz_C);
	} while (op >= 0);

	printf("\n\n\n");
	system("pause");
	printf("\n\n\n");
	return 0;
}

// fun��o que l� uma matriz
void le_matriz(int *mat)
{
	int k;
	for (int i = 0; i < TAM; i++)
	{
		k = i * TAM;
		for (int j = 0; j < TAM; j++)
		{
			printf("Informe o valor do elemento [%d][%d]:", i, j);
			scanf_s("%d", &mat[k + j]);
		}
	}
}

// fun��o que imprime uma matriz
void imprime_matriz(int* mat)
{
	int k;
	for (int i = 0; i < TAM; i++)
	{
		k = i * TAM;
		for (int j = 0; j < TAM; j++)
		{
			printf(" | [%2d] | ", mat[k + j]);
		}
		printf("\n");
	}
}

// fun��o que soma duas matrizes em uma outra matriz
void calc_soma(int* mat_A, int* mat_B, int* mat_C)
{
	int k;
	for (int i = 0; i < TAM; i++)
	{
		k = i * TAM;
		for (int j = 0; j < TAM; j++)
		{
			mat_C[k + j] = mat_A[k + j] + mat_B[k + j];
		}
	}
}

// fun��o que libera o espa�o alocado das matrizes
void libera_espaco(int* mat_A, int* mat_B, int* mat_C)
{
	free(mat_A);
	free(mat_B);
	free(mat_C);
}
