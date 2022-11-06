#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int multiplica(int a, int b);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, res;

	// leitura de dois numero inteiros
	printf(":::::MULTIPLICAÇÃO:::::\n");
	printf("Informe o valor do 1º número: ");
	scanf_s("%d", &n1);
	printf("Informe o valor do 2º número: ");
	scanf_s("%d", &n2);
	printf("::::::::::::::::::::::::::::::::::::\n\n");
	
	// res recebe o retorno da função multiplica
	res = multiplica(n1, n2);

	printf(":::::RESULTADO:::::\n");
	printf("%2d * %2d = %2d\n\n", n1, n2, res);
	printf("::::::::::::::::::::::::::::::::::::\n\n");

	system("PAUSE");
	return 0;
}

// função recursiva que multiplica dois números fazendo somas sucessivas
int multiplica(int a, int b)
{
	if (a == 0)
		return a;
	if (b == 0)
		return b;
	else if (b > 1)
		return a + multiplica(a, b - 1);
	else if (b == 1)
		return a;
}