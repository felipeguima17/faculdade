#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, * y;

	y = &x;

	printf("Digite um n�mero inteiro: ");
	scanf_s("%d", y);

	printf("\nEndere�o de x = %p (chamando &x)\n", &x);
	printf("Endere�o de x = %p (chamando y)\n", y);
	printf("Valor de x = %d (chamando x)\n", x);
	printf("Valor de x = %d (chamando *y)\n\n", *y);

	system("pause");
	return 0;
}