#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y, res;
	float resDiv;
	char op;

	printf("-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-\n");
	printf("Escolha uma opção!\n");
	printf("+\n");
	printf("-\n");
	printf("*\n");
	printf("/\n");
	printf("Sua escolha: ");
	scanf_s("%c", &op);
	printf("\n-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-\n\n");

	switch (op)
	{
	case '+':
		printf("x = ");
		scanf_s("%d", &x);
		printf("y = ");
		scanf_s("%d", &y);
		res = x + y;
		printf("\nResultado: %d + %d = %d\n", x, y, res);
		break;

	case '-':
		printf("x = ");
		scanf_s("%d", &x);
		printf("y = ");
		scanf_s("%d", &y);
		res = x - y;
		printf("\nResultado: %d - %d = %d\n", x, y, res);
		break;

	case '*':
		printf("x = ");
		scanf_s("%d", &x);
		printf("y = ");
		scanf_s("%d", &y);
		res = x * y;
		printf("\nResultado: %d * %d = %d\n", x, y, res);
		break;

	case '/':
		printf("x = ");
		scanf_s("%d", &x);
		printf("y = ");
		scanf_s("%d", &y);
		resDiv = (float)x / (float)y;
		printf("\nResultado: %d / %d = %.2f\n", x, y, resDiv);
		break;

	default:
		printf("\nOpção inválida!\n");
		break;
	}



	return 0;
}