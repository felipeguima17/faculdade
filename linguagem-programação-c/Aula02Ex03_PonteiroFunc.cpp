#include<stdio.h>
#include<locale.h>

void soma_dois(int* num);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x = 5;

	printf("Valor de x antes da fun��o = %d\n", x);

	soma_dois(&x); // passou como par�metro da fun��o o endere�o da vari�vel x

	printf("Valor de x depois da fun��o = %d\n", x);

	return 0;
}

void soma_dois(int* num) // passagem de par�metro por refer�ncia. O valor da vari�vel � alterado
{
	*num = *num + 2;
}