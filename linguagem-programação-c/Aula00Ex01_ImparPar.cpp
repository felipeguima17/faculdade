#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x;

	printf("Digite um número inteiro: ");
	scanf_s("%d", &x);

	if (x % 2 == 0)
	{
		printf("\nO número %d é par!\n", x);
	}

	else
	{
		printf("\nO número %d é impar!\n", x);
	}

	return 0;
}