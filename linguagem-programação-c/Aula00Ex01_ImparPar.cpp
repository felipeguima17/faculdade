#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x;

	printf("Digite um n�mero inteiro: ");
	scanf_s("%d", &x);

	if (x % 2 == 0)
	{
		printf("\nO n�mero %d � par!\n", x);
	}

	else
	{
		printf("\nO n�mero %d � impar!\n", x);
	}

	return 0;
}