#include<stdio.h>
#include<locale.h>

int ImparPar(int x); // o cabe�alho da fun��o deve aparecer antes da fun��o main

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int res, num;

	printf("Digite um n�mero inteiro: ");
	scanf_s("%d", &num);

	res = ImparPar(num);

	printf("%d\n\n", res);

	return 0;
}

int ImparPar(int x) // a fun��o deve ser escrita ap�s a fun��o main
{
	if (x % 2 == 0)
		return 1;
	else
		return 0;
}