#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int cont = 0;

	//repeti��o usando o while
	while (cont <= 30)
	{
		if (cont % 2 == 0)
		{
			printf("O n�mero %d � par!\n", cont);
		}
		else
		{
			printf("O n�mero %d � impar!\n", cont);
		}

		cont++;
	}

	// repeti��o usando o do...while
	do
	{
		if (cont % 2 == 0)
		{
			printf("O n�mero %d � par!\n", cont);
		}
		else
		{
			printf("O n�mero %d � impar!\n", cont);
		}

		cont++;
	} while (cont <= 60);

	// repeti��o usando o for
	for (cont; cont <= 100; cont++)
	{
		if (cont % 2 == 0)
		{
			printf("O n�mero %d � par!\n", cont);
		}
		else
		{
			printf("O n�mero %d � impar!\n", cont);
		}
	}

	return 0;
}