#include<stdio.h>
#include<locale.h>

int ImparPar(int x); // o cabeçalho da função deve aparecer antes da função main

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int res, num;

	printf("Digite um número inteiro: ");
	scanf_s("%d", &num);

	res = ImparPar(num);

	printf("%d\n\n", res);

	return 0;
}

int ImparPar(int x) // a função deve ser escrita após a função main
{
	if (x % 2 == 0)
		return 1;
	else
		return 0;
}