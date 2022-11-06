#include<stdio.h>
#include<locale.h>

void soma_dois(int* num);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x = 5;

	printf("Valor de x antes da função = %d\n", x);

	soma_dois(&x); // passou como parâmetro da função o endereço da variável x

	printf("Valor de x depois da função = %d\n", x);

	return 0;
}

void soma_dois(int* num) // passagem de parâmetro por referência. O valor da variável é alterado
{
	*num = *num + 2;
}