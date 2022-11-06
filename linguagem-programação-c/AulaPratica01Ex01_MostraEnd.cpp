#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y, z;

	printf("Endereço da variável x = %p\n", &x);
	printf("Endereço da variável y = %p\n", &y);
	printf("Endereço da variável z = %p\n\n", &z);

	system("pause");
	return 0;
}