#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int cont1(int ini, int fim);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	printf("=== Iteratividade (1 a 20) ===\n\n");
	for (int i = 1; i <= 20; i++)
	{
		printf("%d ", i);

	}
	printf("\n\n\n");
	printf("=== Recursividade (1 a 20) ===\n\n");
	cont1(1, 20);
	printf("\n\n\n");

	system("pause");
	return 0;
}

int cont1(int ini, int fim)
{
	if (ini <= fim)
	{
		printf("%d ", ini);
		return ini + cont1(ini+1, fim);
	}
}