#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, * y;

	y = &x;

	printf("Digite um número inteiro: ");
	scanf_s("%d", y);

	printf("\nEndereço de x = %p (chamando &x)\n", &x);
	printf("Endereço de x = %p (chamando y)\n", y);
	printf("Valor de x = %d (chamando x)\n", x);
	printf("Valor de x = %d (chamando *y)\n\n", *y);

	system("pause");
	return 0;
}