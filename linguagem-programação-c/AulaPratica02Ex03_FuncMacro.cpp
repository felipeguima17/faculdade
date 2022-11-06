#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

#define maior(x, y) x > y ? x : y

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y;

	printf("Digite o valor de x: ");
	scanf_s("%d", &x);
	printf("Digite o valor de y: ");
	scanf_s("%d", &y);

	printf("\n\nMAIOR VALOR = %d\n\n", maior(x, y));

	system("pause");
	return 0;
}