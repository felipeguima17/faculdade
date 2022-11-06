#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int cont = 0;

	//repetição usando o while
	while (cont <= 30)
	{
		if (cont % 2 == 0)
		{
			printf("O número %d é par!\n", cont);
		}
		else
		{
			printf("O número %d é impar!\n", cont);
		}

		cont++;
	}

	// repetição usando o do...while
	do
	{
		if (cont % 2 == 0)
		{
			printf("O número %d é par!\n", cont);
		}
		else
		{
			printf("O número %d é impar!\n", cont);
		}

		cont++;
	} while (cont <= 60);

	// repetição usando o for
	for (cont; cont <= 100; cont++)
	{
		if (cont % 2 == 0)
		{
			printf("O número %d é par!\n", cont);
		}
		else
		{
			printf("O número %d é impar!\n", cont);
		}
	}

	return 0;
}